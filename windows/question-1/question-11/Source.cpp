#include<iostream>
#include<Windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	_SECURITY_ATTRIBUTES  sa;
	sa.nLength = sizeof(sa);
	sa.bInheritHandle = TRUE;
	sa.lpSecurityDescriptor = NULL;
	HANDLE hFile = CreateFileA("test.txt", GENERIC_READ | GENERIC_WRITE, 0, &sa, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	cout << "Parent" << hFile << endl;
	if (hFile == NULL)
	{
		cout << "Could not Create a Handle to the File" << endl;
	}
	else
	{
		STARTUPINFO si;
		PROCESS_INFORMATION pi;
		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		ZeroMemory(&pi, sizeof(pi));
		//hardcoded as calling FileOperations1
		char arguments[100];
		sprintf(arguments, "%s %s %p", argv[1], "some", hFile);
		cout << "Arguments - " << arguments << endl;
		int flag = CreateProcessA(NULL, arguments, &sa, NULL, TRUE, 0, NULL, NULL, &si, &pi);
		if (flag == 0)
		{
			cout << "Could not Create a Process" << endl;
		}
		else
		{
			WaitForSingleObject(pi.hProcess, INFINITE);
			cout << "Parent Process ID - " << GetCurrentProcessId() << endl;
			cout << "Child Process ID - " << GetProcessId(pi.hProcess) << endl;
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
		}
	}
	system("pause");
}
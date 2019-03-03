#include<Windows.h>
#include<iostream>
using namespace std;
void main(int argc, char *argv[])
{
	char arguments[] = "question-5.exe textfile.txt";
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	if (!CreateProcessA(NULL, arguments, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		printf("CreateProcess failed (%d).\n", GetLastError());
	}
	else
	{
		cout << "sucessful56"<<endl;
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	system("pause");
}

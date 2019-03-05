#include<iostream>
#include<windows.h>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID lpParam);
int main()
{
	HANDLE hThread;
	DWORD dwThreadId;
	char content[100];
	SECURITY_ATTRIBUTES sa;
	sa.bInheritHandle = TRUE;
	cout << "Enter the parameter to be passed to thread" << endl;
	cin >> content;
	hThread = CreateThread(NULL, 0, ThreadFunction, content, 0, &dwThreadId);
	if (hThread == NULL)
		cout << "Could not create a Thread" << endl;
	else
	{
		WaitForSingleObject(hThread, INFINITE);
	}
	DWORD dwExitCode;
	GetExitCodeThread(hThread, &dwExitCode);
	cout << "The Exit Code is - " << dwExitCode;
	system("pause");
}
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
	cout << "----In Thread----" << endl;
	cout << "Parameters passed to Thread are - " << (char *)lpParam << endl;
	DWORD ExitCode;
	cout << "Enter the exit code to be passed to primary process" << endl;
	cin >> ExitCode;
	ExitThread(ExitCode);
	return 0;
}
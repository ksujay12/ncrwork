#include<iostream>
#include<windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	SECURITY_ATTRIBUTES sa;
	HANDLE hEvent;
	sa.bInheritHandle = TRUE;
	sa.lpSecurityDescriptor = NULL;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	const char *eventname = "TestEvent";
	hEvent = CreateEventA(&sa, TRUE, TRUE, eventname);
	if (hEvent == NULL)
		cout << "Event Creation Failed" << endl;
	else
	{
		ResetEvent(hEvent);
		char argument[100];
		sprintf(argument, "%s %p", argv[1], hEvent);
		int flag = CreateProcessA(NULL, argument, &sa, NULL, NULL, 0, NULL, NULL, &si, &pi);
		if (flag == 0)
		{
			cout << "Creation of Process Failed" << GetLastError() << endl;
		}
		else
		{
			WaitForSingleObject(pi.hProcess, INFINITE);
			CloseHandle(pi.hProcess);
			CloseHandle(pi.hThread);
		}
	}
	system("pause");
}
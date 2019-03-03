#include<iostream>
#include<Windows.h>
using namespace std;
void main(int argc, TCHAR *argv[])
{
	STARTUPINFO si, si2;
	PROCESS_INFORMATION pi, pi2;
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&si2, sizeof(si2));
	si.cb = sizeof(si);
	si2.cb = sizeof(si2);
	
	if (CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
	{
		cout << "CreateProcess calc is  done \n";
		cout << "The proces id=" << pi.dwProcessId << endl;
		cout << "The handle is=" << pi.hProcess << endl;
		// Wait until child process exits.
		WaitForSingleObject(pi.hProcess, INFINITE);

		// Close process and thread handles. 
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	else
	{
		cout << "there is calc error here\n" << GetLastError();
	}
	if (CreateProcessA(NULL, argv[2], NULL, NULL, FALSE, 0, NULL, NULL, &si2, &pi2))
	{
		cout << "CreateProcess notepad is  done \n";
		cout << "The proces id=" << pi2.dwProcessId << endl;
		cout << "The handle is=" << pi2.hProcess << endl;
		// Wait until child process exits.
		WaitForSingleObject(pi2.hProcess, INFINITE);

		// Close process and thread handles. 
		CloseHandle(pi2.hProcess);
		CloseHandle(pi2.hThread);
	}
	else
	{
		cout << "there is notepad error here\n" << GetLastError();
	}
	system("pause");
}
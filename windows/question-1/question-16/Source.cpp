#include<iostream>
#include<windows.h>
using namespace std;
int main(int argc, char *argv[])
{
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi));
	bool flag = CreateProcessA(NULL, argv[1], NULL, NULL, FALSE, HIGH_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (flag == 0)
		cout << "Creation of Process Failed" << endl;
	else
	{
		WaitForSingleObject(pi.hProcess, INFINITE);
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);
	}
	system("pause");
}
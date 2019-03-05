#include<windows.h>
#include<iostream>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID lpParam);
int main()
{
	HANDLE hThread;
	DWORD dwThreadId;
	char content[100];
	cout << "Enter the arguments to be passed to the Thread" << endl;
	cin >> content;
	hThread = CreateThread(NULL, 0, ThreadFunction, content, CREATE_SUSPENDED, &dwThreadId);
	if (hThread == NULL)
	{
		cout << "Could not create a Thread" << endl;
	}
	cout << "Wait for 5 Seconds" << endl;
	Sleep(5000);
	ResumeThread(hThread);
	system("pause");
}
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
	cout << "Parameter passed to thread is  " << (char*)lpParam << endl;
	for (int i = 1; i <= 1000; i++)
		cout << i << endl;
	return 0;
}
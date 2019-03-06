#include<iostream>
#include<windows.h>
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID lpParam);
int main()
{
	DWORD dwThreadId;
	HANDLE hThread;
	char content[100];
	cout << "The current priority of the Process 2 is - " << GetPriorityClass(GetCurrentProcess()) << endl;
	SetPriorityClass(GetCurrentProcess(), BELOW_NORMAL_PRIORITY_CLASS);
	cout << "The current priority of the Process 2 is - " << GetPriorityClass(GetCurrentProcess()) << endl;
	cout << "Enter the content to pass to the thread" << endl;
	cin >> content;
	hThread = CreateThread(NULL, 0, ThreadFunction, content, 0, &dwThreadId);
	SetThreadPriority(hThread, THREAD_PRIORITY_HIGHEST);
	if (hThread == NULL)
		cout << "Creation of Thread Failed" << endl;
	WaitForSingleObject(hThread, INFINITE);
}
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
	cout << "The Thread arguments are - " << (char *)lpParam << endl;
	cout << "Thread Id is - " << GetCurrentThreadId() << endl;
	cout << "The Thread Priority Class is - " << GetThreadPriority(GetCurrentThread()) << endl;
	return 0;
}
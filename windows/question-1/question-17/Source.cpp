#include<windows.h>
#include<iostream>
#define end 100
using namespace std;
DWORD WINAPI ThreadFunction(LPVOID lpParam);
int var = 0;
int main()
{
	int i;
	DWORD dwThreadId1, dwThreadId2;
	HANDLE hThread1;
	HANDLE hThread2;
	for (i = 0;i < end&&var!= 1;i++)
	{
		var = 0;
		hThread1 = CreateThread(NULL, 0, ThreadFunction, NULL, 0, &dwThreadId1);
		Sleep(1000);
		cout << "-----IN Thread1-----" << " " << var << endl;

		hThread2 = CreateThread(NULL, 0, ThreadFunction, NULL, 0, &dwThreadId2);

		Sleep(1000);
		cout << "-----IN Thread2-----" << " " << var << endl;
	}
	if (var == 1)
	{
		cout << "inconsistency" << endl;
	}
	cout << "in main" << endl;
	cout << var << endl;

	system("pause");
	return 0;
}
DWORD WINAPI ThreadFunction(LPVOID lpParam)
{
	
	var = var + 1;

	return 0;
}

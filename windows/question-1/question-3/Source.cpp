#include<iostream>
#include<windows.h>
#define size 32567
using namespace std;
void main()
{
	LPCTSTR src = "%TEMP%";
	DWORD dest_size;
	TCHAR expanded[size];
	LPWSTR exp;
	BOOL valid;
	valid = ExpandEnvironmentStrings(
		src,//LPCSTR lpSrc,
		expanded,//LPSTR  lpDest,
		size//DWORD  dwSize
	);
	if (valid == 0)
	{
		cout << "Error" << endl;
	}
	else
	{
		wcout << expanded << endl;
	}
	system("pause");
}
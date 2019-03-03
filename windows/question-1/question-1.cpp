#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	char ansi[] = "sujay";
	WCHAR wideCharacter[] = L"kumar";
	char *changedAnsi = NULL;
	WCHAR *changedWidecharacter = NULL;
	int lenAnsi = strlen(ansi);
	int lenWidecharacter = wcslen(wideCharacter);

	int x = IsTextUnicode(wideCharacter, sizeof(char)*lenWidecharacter, NULL);
	if (x == 1)
	{
		cout << "it is a unicode" << endl;
	}
	else
	{
		cout << "it is not a unicode"<<endl;
	}


	int a = MultiByteToWideChar(CP_UTF8, 0, ansi, -1,NULL, 0);
	changedWidecharacter = new WCHAR[a];
	
	
	int b = MultiByteToWideChar(CP_UTF8, 0, ansi, -1, changedWidecharacter, a);
	if (b == 0)
	{
		printf("cannot be converted");
	}
	else
	{
		wcout << "Converted String is : " << changedWidecharacter<<endl;
	}

	
	int a1 = WideCharToMultiByte(CP_UTF8, 0, wideCharacter, -1, changedAnsi, 0, NULL, NULL);
	changedAnsi = new char[a1];
	int b1 = WideCharToMultiByte(CP_UTF8, 0, wideCharacter, -1, changedAnsi, a1, NULL, NULL);
	
	if (b1 == 0)
	{
		printf("cannot be converted");
	}
	else
	{
		cout << "Converted String is : " << changedAnsi<<endl;
	}
	
	
	system("pause");
	return 0;
}
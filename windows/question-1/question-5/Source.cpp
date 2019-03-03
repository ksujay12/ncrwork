#include<Windows.h>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	HANDLE hFile;
	cout << "argc" << argc << endl;
	if (argc == 1)
		cout << "Not Working" << endl;
	else if (argc == 2)
	{

		hFile = CreateFileA(argv[1], GENERIC_READ | GENERIC_WRITE, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			cout << "Could not create a File" << endl;
		}
		else
		{
			char content[100];
			DWORD BytesWritten;
			cout << "Enter the string to be written" << endl;
			scanf("%[^\n]s", content);
			int flag = WriteFile(hFile, content, strlen(content), &BytesWritten, NULL);
			if (flag == 0)
			{
				cout << "Failed to Write to File" << endl;
			}
			else
			{
				cout << endl << "Successful" << endl;
			}
		}
	}
	system("pause");
	return 0;
}
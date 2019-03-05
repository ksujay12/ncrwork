#include<iostream>
#include<Windows.h>
using namespace std;
void main() {
	HANDLE evntcreate;
	evntcreate = CreateEventA(NULL, FALSE, TRUE, "EVENT CREATED");
	if (evntcreate == NULL)
	{
		cout << "There is an error" << endl;
		cout << "The error code is" << GetLastError() << endl;

	}
	else
	{
		cout << "Created the event";
	}
	system("pause");
}
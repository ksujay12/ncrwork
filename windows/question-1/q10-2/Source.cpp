#include<Windows.h>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout << "Child Process" << endl;
	HANDLE hEvent;
	sscanf(argv[1], "%p", &hEvent);
	if (!SetEvent(hEvent))
		cout << "Event is Not Set" << endl;
	else
		cout << "Event is Set" << endl;
}
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
struct _stack_
{
	char *s;
	int size;
	int top;
}sta;
class stack
{
public:
	struct _stack_ sta;
public:
	stack();
	void push(char);
	int pop();
	int peek();
	bool empty();
	bool isfull();
	void display();
	~stack();
	void getsize(int);

};
stack::stack()
{
	sta.top = -1;
	sta.s = NULL;
	sta.size = 0;
}
void stack::getsize(int n)
{
	sta.size = n;
	sta.s = new char[n];
}
bool stack::isfull()
{
	return(sta.top == (sta.size - 1));
}
bool stack::empty()
{
	return(sta.top == -1);
}
void stack::push(char ele)
{
	if (!isfull())
	{
		sta.s[++sta.top] = ele;
	}
	else
		cout << "stack is full" << endl;
}
int stack::pop()
{
	int x = -999;
	if (!empty()) {
		x = sta.s[sta.top--];
	}
	else
		cout << "stack is empty" << endl;
	return x;
}
int stack::peek()
{

	int x = -999;
	if (!empty())
		x = sta.s[sta.top];
	else
		cout << "stack is empty" << endl;
	return x;
}
void stack::display()
{
	for (int i = 0;i <= sta.top;i++)
	{
		cout << sta.s[i] << " ";
	}
}
stack::~stack()
{
	delete sta.s;
}
int main()
{
	stack a;
	a.getsize(10);
	int i, flag = 0;
	string x;
	cout << "enter string" << endl;
	cin >> x;
	for (i = 0;x[i] != '\0';i++)
	{
		switch (x[i])
		{
		case '[':
		case '(':
		case'{': a.push(x[i]);
			break;
		case']':if (a.peek() == '[')
		{
			a.pop();
			break;
		}
				else
		{
			flag = 1;
			break;
		}
		case')':if (a.peek() == '(')
		{
			a.pop();
			break;
		}
				else
		{
			flag = 1;
			break;
		}
		case'}':if (a.peek() == '{')
		{
			a.pop();
			break;
		}
				else
		{
			flag = 1;
			break;
		}
		}
	}
	if (flag==0)
	{
		cout << "balanced";
	}
	else if(flag==1)
	{
		cout << "not balanced";
	}
	system("pause");
	return 0;
}
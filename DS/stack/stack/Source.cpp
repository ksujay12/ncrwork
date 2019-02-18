#include<iostream>
using namespace std;
struct _stack_
{
	int *s;
	int size;
	int top;
};
class stack
{
	struct _stack_ sta;
public:
	stack();
	void push(int);
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
	sta.s = new int[n];
}
bool stack::isfull()
{
	return(sta.top == (sta.size - 1));
}
bool stack::empty()
{
	return(sta.top == -1);
}
void stack::push(int ele)
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
	a.getsize(5);
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	a.display();
	cout<<endl<<a.peek()<<endl;
	cout << a.pop() << endl;
	cout << a.pop() << endl;
	a.display();
	system("pause");
	return 0;
}
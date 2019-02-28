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
	char pop();
	char peek();
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
char stack::pop()
{
	char x = 'h';
	if (!empty()) {
		x = sta.s[sta.top--];
	}
	//else
		//cout << "stack is empty" << endl;
	return x;
}
char stack::peek()
{

	char x = 'h';
	if (!empty())
		x = sta.s[sta.top];
	//else
		//cout << "stack is empty" << x << endl;
	return x;
}
void stack::display()
{
	for (int i = sta.top;i >= 0;i--)
	{
		cout << sta.s[i] << " ";
	}
}
stack::~stack()
{
	delete sta.s;
}
int prec(char q)
{
	if ((q=='*') || (q=='/'))
	{
		return 10;
	}
	if ((q=='+') || (q=='-'))
	{
		return 7;
	}
	if ((q=='(') || (q==')'))
	{
		return 1;
	}
	if ((q == '[') || (q == ']'))
	{
		return 1;
	}
	if ((q == '{') || (q == '}'))
	{
		return 1;
	}
	
}
int main()
{
	int prec(char);
	stack a;
	a.getsize(10);
	int i, flag = 0;
	string x;
	cout << "enter string" << endl;
	cin >> x;
	for (i = 0;x[i] != '\0';i++)
	{
		if (x[i] >= 'a'&&x[i] <= 'z')
		{
			cout << x[i] << " ";
		}
		else
		{
			switch (x[i])
			{
			case '[':
			case '(':
			case'{': a.push(x[i]);
				break;
			case'+':
			case'-':
			case'/':
			case'*':
				if (a.peek() == 'h')
				{
					//cout << "push";
					a.push(x[i]);
					break;
				}
				else
				{
					
					if (prec(x[i]) > prec(a.peek()))
					{
						//cout << "push";
						a.push(x[i]);
						break;
					}
					else
					{
						if (prec(x[i]) == prec(a.peek()))
						{
							cout << a.pop();
							a.push(x[i]);
						}
						else {

							if (prec(x[i]) < prec(a.peek()))
							{
								//cout << "pop";
								cout << a.pop();
							}
							a.push(x[i]);
							break;
						}
					}
					break;
				}
				break;

			case']':

				while (a.peek() != '[') {
					cout << a.pop();
				}
				a.pop();
				
				break;

			case')':

				while (a.peek() != '(') {
					cout << a.pop();
				} 
				a.pop();
				
				break;

			case'}':

				while (a.peek() != '{') {
					cout << a.pop();
				}
				a.pop();
				
				break;
			}
		}
		
	}

	a.display();

	system("pause");
	return 0;
}
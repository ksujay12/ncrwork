#include<iostream>
int result = 0;
int add(int a, int b);
int multiply(int a, int b);
int substract(int a, int b);
float divide(int a, int b);
using namespace std;
#define SIZE 100
class _Stack_
{
	struct sta
	{
		int top;
		char *elements;
		int size;
	}stack;
public:
	_Stack_()
	{
	}
	_Stack_(int size)
	{
		stack.size = size;
		stack.elements = new char[size];
		stack.top = -1;
	}
	bool isEmpty()
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isFull()
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
		return false;
	}
	void Push(char x)
	{
		if (stack.top == stack.size - 1)
		{
			cout << "Stack Full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	char Pop()
	{
		int x = -999;
		if (stack.top == -1)
		{
			//cout<<"Stack Empty";
			return x;
		}
		x = stack.elements[stack.top--];
		return x;
	}
	char Peek()
	{
		int x = -999;
		if (stack.top == -1)
		{
			//cout<<"Stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void Display()
	{
		for (int i = 0;i <= stack.top;i++)
		{
			cout << stack.elements[i];
		}
	}
	/*void GetSize(int size)
	{
		stack.size = size;
	}*/
	~_Stack_()
	{
		delete (stack.elements);
	}
};
int Precedence(char x)
{
	if (x == '*' || x == '/')
		return  3;
	else if (x == '+' || x == '-')
		return 2;
	else
		return 1;
}
class _StackInt_
{
	struct sta
	{
		int top;
		int *elements;
		int size;
	}stack;
public:
	_StackInt_()
	{
	}
	_StackInt_(int size)
	{
		stack.size = size;
		stack.elements = new int[size];
		stack.top = -1;
	}
	bool isEmpty()
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isFull()
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
		return false;
	}
	void Push(int x)
	{
		if (stack.top == stack.size - 1)
		{
			cout << "Stack Full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	int Pop()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "Stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top--];
			return x;
		}
	}
	int Peek()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout << "Stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void Display()
	{
		for (int i = 0;i <= stack.top;i++)
		{
			cout << stack.elements[i] << endl;
		}
	}
	/*void GetSize(int size)
	{
		stack.size = size;
	}*/
	~_StackInt_()
	{
		delete (stack.elements);
	}
};
int main()
{
	char input_string[SIZE];
	cout << "Enter the string";
	cin >> input_string;
	char result[SIZE];
	_Stack_ s(10);
	int curr = 0;
	char ch;
	int k = 0;
	for (int i = 0;i < strlen(input_string);i++)
	{
		ch = input_string[i];
		if (isdigit(ch) || isalpha(ch))
		{
			result[k++] = ch;
		}
		else if (ch == '(')
		{
			//cout<<"2 - "<<ch<<"\n";
			s.Push(ch);
		}
		else if (ch == ')')
		{
			while (s.Peek() != '(')
			{
				//cout<<"3 - "<<ch<<"\n";
				result[k++] = s.Pop();
			}
			s.Pop();
		}
		else if (s.isEmpty())
		{
			//cout<<"1 - "<<ch<<"\n";
			s.Push(ch);
		}
		else if (Precedence(ch) > Precedence(s.Peek()))
		{
			//cout<<"4 - "<<ch<<"\n"; 
			s.Push(ch);
		}
		else
		{
			while (Precedence(ch) <= Precedence(s.Peek()))
			{
				//cout<<"5 - "<<ch<<"\n";
				result[k++] = s.Pop();
			}
			//cout<<"6 - "<<ch<<"\n";
			s.Push(ch);
		}
	}
	while (!s.isEmpty())
	{
		//cout<<"7 - "<<ch<<"\n";
		result[k++] = s.Pop();
	}
	result[k] = '\0';
	cout << "String - " << result << endl;
	_StackInt_ s1(10);
	for (int i = 0;i < strlen(result);i++)
	{
		char ch;
		ch = result[i];
		if (isdigit(ch) && !s1.isFull())
		{
			s1.Push(ch - '0');
		}
		else
		{
			int a = s1.Pop();
			int b = s1.Pop();
			switch (ch)
			{
			case '+': s1.Push(add(a, b));
				break;
			case '-': s1.Push(substract(b, a));
				break;
			case '*': s1.Push(multiply(b, a));
				break;
			case '/': s1.Push(divide(b, a));
				break;
			}
		}
	}
	cout << "Result - " << s1.Pop();
	system("pause");
	return 0;
}
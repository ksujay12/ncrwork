#include<iostream>
#include "multiply.h"
#include "addition.h"
#include "division.h"
#include "subtraction.h"
#define str_size 20
using namespace std;
int prec(char c)
{
	if (c == '*' || c == '/')
		return 10;
	else if (c == '+' || c == '-')
		return 9;
	else
		return 0;
}
struct stack1 {
	int size;
	char *s;
	int top;
};
class stack_class
{
	stack1 stk;
public:
	stack_class()
	{
		stk.size = 0;
		stk.s = NULL;
		stk.top = -1;
	}
	void getsize(int n)
	{
		stk.size = n;
		stk.s = new char[n];
	}
	void push(char ele)
	{
		if (!IsFull())
			stk.s[++stk.top] = ele;
		else
			cout << "Overflow" << endl;
	}
	bool IsFull()
	{
		return(stk.top == (stk.size - 1));
	}
	char pop()
	{
		if (!Isempty())
			return(stk.s[stk.top--]);
		else
			cout << "Underflow";
	}
	bool Isempty()
	{
		return (stk.top == -1);
	}
	char peek()
	{
		return(stk.s[stk.top]);
	}
	void display()
	{
		for (int i = 0; i <= stk.top; i++)
			cout << stk.s[i] << endl;
	}
	char getele(int n)
	{
		return(stk.s[n]);
	}
	int givetop()
	{
		return stk.top;
	}

};
char *infix_postfix(char * str)
{
	stack_class st;
	st.getsize(10);
	char ch;
	char *strop = (char *)malloc(sizeof(char)*(str_size));
	int j = 0, c = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		ch = str[i];
		if (isdigit(ch))
		{
			//cout << "hello";
			strop[j] = ch;
			j++;
		}
		else
		{
			if (st.Isempty())
			{
				st.push(ch);
			}
			else if ((prec(st.peek()) >= prec(ch)))
			{
				while ((prec(st.peek()) >= prec(ch))) {
					strop[j] = st.pop();
					j++;
				}
				st.push(ch);
			}

			else
			{
				st.push(ch);

			}
		}
	}
	while (!st.Isempty())
	{
		strop[j] = st.pop();
		j++;
	}
	strop[j] = '\0';
	return strop;
}
int postfix_evalu(char *tobe_str)
{
	stack_class st;
	st.getsize(10);
	char ch;
	int n, i, j, res, temp;
	for (i = 0; i < strlen(tobe_str); i++)
	{
		if (isdigit(tobe_str[i]))
		{
			j = tobe_str[i] - '0';
			st.push(j);
		}
		else
		{
			if (st.givetop() > 0)
			{
				temp = 0;
				cout << endl;
				temp = st.pop();
				switch (tobe_str[i])
				{
				case'*':
					/*cout << "in multi" << endl;*/
			/*		cout << "temp=" << temp << endl;
					cout << "top=" << st.givetop() << endl;*/
					temp = multi(temp, st.peek());
					/*cout << "temp=" << temp <<endl;*/
					st.pop();
					st.push(temp);
					break;
				case'+':
					/*	cout << "in add" << endl;*/
					temp = add(temp, st.peek());
					st.pop();
					st.push(temp);
					break;

				case'-':
					/*cout << "in sub" << endl;*/
					temp = sub(temp, st.peek());
					st.pop();
					st.push(temp);
					break;
				case'/':
					/*cout << "in div" << endl;*/
					temp = divi(temp, st.peek());
					st.pop();
					st.push(temp);
					break;

				default:
					break;
				}
			}
		}
	}
	return temp;
}
void main()
{
	char str_in[25];
	char *op_str = NULL;
	int result;
	cout << "Enter the string to be calcuated without the braces\n";
	cin >> str_in;
	for (int i = 0; i < strlen(str_in); i++)
	{
		if (str_in[i] != '+'&&str_in[i] != '-'&&str_in[i] != '*'&&str_in[i] != '/' && !(isdigit(str_in[i])))
		{
			cout << "Nope seomething is wrong with your input" << endl;
			system("pause");

			return;
		}
		else if ((str_in[i] == '+' || str_in[i] == '-' || str_in[i] == '*' || str_in[i] == '/') && (str_in[i + 1] == '+' || str_in[i + 1] == '-' || str_in[i + 1] == '*' || str_in[i + 1] == '/'))
		{
			cout << "Nope seomething is wrong with your input" << endl;
			system("pause");

			return;
		}
	}
	op_str = infix_postfix(str_in);
	result = postfix_evalu(op_str);
	cout << "The required result---" << result << endl;
	system("pause");
}
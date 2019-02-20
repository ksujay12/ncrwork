#include<iostream>
using namespace std;
struct stack1 {
	int size;
	int *s;
	int top;
};
class stack2
{
	stack1 stk;
public:
	stack2()
	{
		stk.size = 0;
		stk.s = NULL;
		stk.top = -1;
	}
	void getsize(int n)
	{
		stk.size = n;
		stk.s = new int[n];
	}
	void push(int ele)
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
	int pop()
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
	int peek()
	{
		return(stk.s[stk.top]);
	}
	int gettop()
	{
		return stk.top;
	}
	void display()
	{
		for (int i = 0; i <= stk.top; i++)
			cout << "	" << stk.s[i];
	}

};

void main()
{
	stack2 st;
	char str[20], ch;
	int n, i, j, res, temp;
	cout << "Enter the postfix notation" << endl;
	cin >> str;
	cout << "Enter the size" << endl;
	cin >> n;
	st.getsize(n);
	for (i = 0; i < strlen(str); i++)
	{
		if (isdigit(str[i]))
		{
			j = str[i] - '0';
			
			st.push(j);
			
		}
		else
		{
			
			if (st.gettop() > 0)
			{
				temp = 0;
				
				cout << endl;
				temp = st.pop();
				
				switch (str[i])
				{
				case'*':
					temp = temp * st.peek();
					st.pop();
					
					st.push(temp);
					break;
				case'+':
					temp = temp + st.peek();
					st.pop();
					
					st.push(temp);
					break;

				case'-':
					temp = temp - st.peek();
					st.pop();
					
					st.push(temp);
					break;
				case'/':
					temp = temp / st.peek();
					st.pop();
					
					st.push(temp);
					break;

				default:
					break;
				}
			}
			
		}
	}
	
	cout << temp << endl;
	system("pause");
}
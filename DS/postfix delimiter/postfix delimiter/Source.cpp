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
	void display()
	{
		for (int i = 0; i <= stk.top; i++)
			cout << stk.s[i] << endl;
	}
	int gettop()
	{
		return stk.top;
	}

};
void main()
{
	stack2 st;
	char str[20], ch;
	int n, num = 0, i = 0, p = 0, j = 0, temp = 0;
	cout << "Enter the string in postfix notation with delimiter @" << endl;
	cin >> str;
	cout << "Enter the stack size" << endl;
	cin >> n;
	st.getsize(n);
	while (i < strlen(str)) {
		if (isdigit(str[i]))
		{
			j = i;
			ch = str[i];
			num = 0;
			p = 0;
			while (str[j] != '@')
			{
				p++;
				j++;
			}
			
			while (str[i] != '@')
			{
				
				num = num + (str[i] - '0')*pow(10, --p);
				i++;
			}
			i++;
			st.push(num);
			cout << "num =" << num << endl;
			
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
			i++;
		}

	}

	cout << "out here" << endl;
	st.display();
	system("pause");
}
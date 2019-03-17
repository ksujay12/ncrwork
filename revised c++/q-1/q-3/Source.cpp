#include<iostream>
#define size 10
using namespace std;
template <class T>
class Stack {
	T stack[size];
	int top;

public:
	Stack()
	{
		top = -1;
	}
	void push(T ele)
	{
		if (top == size - 1)
		{
			cout << "Overflow" << endl;
		}
		else
		{
			stack[++top] = ele;
			cout << "Successfully pushed" << ele << endl;
		}
	}
	T pop()
	{
		if (top == -1)
		{
			cout << "Underflow" << endl;

		}
		else
		{
			return stack[top--];
		}
	}
	void display()
	{
		if (top == -1)
			cout << "Stack is empty";
		else
		{
			cout << "\nDisplaying the contents of the stack---\n";
			for (int i = 0; i <= top; i++)
			{
				cout << "	" << stack[i];
			}
		}
	}
};
class Complex {
	float real;
	float img;
public:
	Complex()
	{
		img = 0;
		real = 0;
	}
	void complex_getvalues()
	{
		cout << "Enter the real part of the complex number\n";
		cin >> this->real;
		cout << "Enter the imaginary part of the complex number\n";
		cin >> this->img;
	}
	friend ostream &operator <<(ostream &cout, Complex c);
};
ostream &operator <<(ostream &cout, Complex c)// Overloading the << to print the Complex data types
{
	cout << "IMG--" << c.img << "	";
	cout << "REal--" << c.real;
	cout << endl;
	return (cout);
}
int main()
{
	Stack<int> st_int;// a stack created for storing the int data type
	Stack<float>st_flt;// a stack created for storing the float data type
	Stack<Complex>st_complx;// a stack created for storing the Complex data type
	Stack<char*>st_string;// a stack created for storing strings in the class
	Complex comp;
	int choice = 0, flag = 1, len_str = 0;
	float ele = 0;
	char *str;
	cout << "Now we are performing operations on char * stack\n";
	while (flag == 1)
	{
		cout << "\nEnter the choice 1.Push\n 2.POP\n 3.Display\n 4.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Enter the length of the string to be considered\n";
			cin >> len_str;
			str = new char[len_str + 1];
			cout << "Enter the string with length " << len_str;
			cin >> str;
			st_string.push(str);
			break;
		case 2:cout << "Popped the element" << st_string.pop();
			break;
		case 3: st_string.display();
			break;
		case 4: flag = 0;
			break;

		}
	}
	while (flag == 1)
	{
		cout << "Enter the choice 1.Push\n 2.POP\n 3.Display\n 4.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Enter the element to be pushed\n";
			cin >> ele;
			st_int.push(ele);
			break;
		case 2:cout << "Popped the element" << st_int.pop();
			break;
		case 3: st_int.display();
			break;
		case 4: flag = 0;
			break;

		}
	}
	cout << "Now perfroming operations on the stack created to store float values" << endl;
	flag = 1;
	while (flag == 1)
	{
		cout << "Enter the choice 1.Push\n 2.POP\n 3.Display\n 4.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:cout << "Enter the element to be pushed\n";
			cin >> ele;
			st_flt.push(ele);
			break;
		case 2:cout << "Popped the element" << st_flt.pop();
			break;
		case 3: st_flt.display();
			break;
		case 4: flag = 0;
			break;

		}
	}
	cout << "Now we are going to perform the operations on the complex stack\n";
	flag = 1;
	while (flag == 1)
	{
		cout << "\nEnter the choice\n 1.Push\n 2.POP\n 3.Display\n 4.Exit\n";
		cin >> choice;
		switch (choice)
		{
		case 1:comp.complex_getvalues();
			st_complx.push(comp);
			break;
		case 2:cout << "Popped the element" << st_complx.pop();
			break;
		case 3: st_complx.display();
			break;
		case 4: flag = 0;
			break;
		}
	}
	system("pause");
}
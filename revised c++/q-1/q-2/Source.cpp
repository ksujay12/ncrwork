#include<iostream>
#include<cstring>
using namespace std;
class string1
{
public:
	char *s;
	int len;
public:
	string1()//default constructor
	{

	}
	string1(const char *x)//one parameterized
	{
		len = strlen(x);
		s = new char[len + 1];
		strcpy(s, x);
	}
	string1(const char *x,int l)//two parameterized
	{
		s = new char[l+1];
		strcpy(s, x);
	}
	string1(const string1 &temp)//copy constructor
	{
		len = temp.len;
		s = new char[len+1];
		strcpy(s, temp.s);
	}
	~string1()//destructor
	{

	}
	char& operator[](int n)//overloading index operator
	{
		return s[n];
	}
	/*string1 operator =(string1 x)//overloading =operator
	{
		len = x.len;
		s = new char[x.len];
		strcpy(s, x.s);
		return s;
	}
	*/
	
	friend string1 operator+(string1 &x, string1 &y);
	friend ostream& operator<<(ostream &cout, const string1 &s);
	friend istream& operator>>(istream &cin, string1 &x);


};
string1 operator+(string1 &x, string1 &y)
{
	string1 temp;
	temp.len = x.len + y.len;
	temp.s = new char[temp.len + 1];
	temp.s = strcat(x.s, y.s);
	return temp;
}
ostream& operator<<(ostream &cout, const string1 &x)
{
	cout << x.s;
	return cout;
}
istream& operator>>(istream &cin, string1 &x)
{
	cin >> x.s;
	return cin;
}
int main()
{
	int len_str = 0, pos = 0;
	char char_rep;
	//Passing a string and its length into the parameterized constructor

	cout << "Enter the length of the string to be taken" << endl;
	cin >> len_str;

	char *temp = (char *)malloc(sizeof(char)*(len_str + 1));
	if (temp == NULL)
	{
		cout << "Memory can't be allocated for the temp variable taken" << endl;
		return 0;
	}

	cout << "Enter the string" << endl;
	cin >> temp;
	cout << "\n\nPassing two values into a paramaeterized constructor\n";
	string1 str_two_param(temp, (len_str + 1));
	cout << "\n Printing the value here ----  ";
	cout << str_two_param;

	//Creating two instances and passing the values into single parameter constructor
	string1 str_hello("Hello");
	string1 str_world("World");
	cout << "The taken strings are---" << str_hello << "-----" << str_world << endl;

	// Creating a string for using overloaded + operator
	string1 str_add;
	str_add = str_hello + str_world;
	cout << "The result of adding the strings--" << str_add << endl;

	// Choose a position in the string to return that value using [] operator
	cout << "Enter the position that is to be replaced in the string" << str_hello << endl;
	cin >> pos;
	cout << "Enter the character" << endl;
	cin >> char_rep;
	str_hello[pos] = char_rep;
	cout << "The string after the replacement--" << str_hello << endl;


	string1 cpy_string;

	/* Try this code for before overloading the assignment operator
	This performs the shallow copying*/
	cout << "shallow copying" << endl;
	cpy_string = str_world;
	cout << "After copying" << cpy_string;
	//Even changing the value of cpy_string will effect the values in str_world
	cpy_string[2] = 'z';
	cout << "After changing in cpy_string the value in str_world is ----" << str_world << endl;
	
	// Now, let's overload the assignment operator and try the deep copying
/*
	cpy_string = str_world;
	cout << "After copying----" << cpy_string << endl;
	*/
	//deleting the allocated dynamic memory here
	delete temp;
	system("pause");
}
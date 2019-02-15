#include<iostream>
using namespace std;
class Student
{
	int rollno;
	char name[20];
	int marks[6];
	int totalmarks;
	char grade;
public:
	Student()
	{
		rollno = 0;
		grade = 0;
	}
	friend ostream & operator << (ostream &cout, const Student &s);
	friend istream & operator >> (istream &cin, Student &s);
	friend void generate_results(Student s[], int n);
};
ostream& operator<<(ostream &cout, const Student &s)
{
	int i = 0;
	cout << "Student Name = " << s.name << endl;
	cout << "Grade = " << s.grade << endl;
	cout << "Total Marks = " << endl << s.totalmarks;
	cout << "Subject Marks are - " << endl;
	for (i = 0;i < 6;i++)
	{
		cout << s.marks[i] << " ";
	}
	return cout;
}
istream& operator>>(istream &cin, Student &s)
{
	int i = 0;
	cin >> s.rollno;
	cin >> s.name;
	cin >> s.grade;
	cin >> s.totalmarks;
	for (i = 0;i < 6;i++)
	{
		cin >> s.marks[i];
	}
	return cin;
}
void generate_results(Student s[], int n)
{
	cout << s[0].totalmarks << endl;
	cout << s[1].totalmarks << endl;
}
int main()
{
	//Student s1,s2;
	//cin>>s1>>s2;
	//cout<<s1<<s2;
	Student s3[2];
	cin >> s3[0] >> s3[1];
	cout << s3[0] << s3[1];
	generate_results(s3, 2);
	system("pause");
	return 0;
}
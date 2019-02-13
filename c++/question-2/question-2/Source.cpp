#include<iostream>
#include<cstring>
using namespace std;
class student
{
public:
	char student_name[30];
	char grade[30];
	int marks1;
	int marks2;
	int marks3;
	float avg;
public: void set_data(const char name[30],int mark1,int mark2,int mark3)
{
	strcpy(student_name, name);
	marks1 = mark1;
	marks2 = mark2;
	marks3 = mark3;
}
public:void average()
{
	
		avg = float(marks1 + marks2 + marks3)/3;
		cout << avg << endl;
}
public: void computegrade()
{
	if (avg > 60)
	{
		strcpy(grade, "first class");
	}
	if (50 < avg &&avg< 60)
	{
		strcpy(grade, "second class");
	}
	if (40 < avg&&avg < 50)
	{
		strcpy(grade, "third class");
	}
	if (avg < 40)
	{
		strcpy(grade, "FAIL");
	}
}
public:void display()
{
	cout << "name:" << student_name << endl;
	cout << "grade:" << grade << endl;
	cout << "marks1:" << marks1 << endl;
	cout << "marks2:" << marks2 << endl;
	cout << "marks3:" << marks3 << endl;
	

}
};
int main()
{
	student a;
	a.set_data("sujay", 80, 65, 70);
	a.average();
	a.computegrade();
	a.display();
	getchar();
	return 0;
}
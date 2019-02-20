#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
class list
{
	struct node* start;
public:
	list();
	void insertfirst(int);
	void insertlast(int);
	void insertafter(int,int);
	void insertbefore(int,int);
	int deletefirst();
	int deletelast();
	void deletespec(int);
	void traverseF();
	void traverseB();
	~list();
};
list::list()
{
	start = NULL;
}
void list::insertfirst(int ele)
{
	struct node* temp;
	temp = new node;
	temp->data = ele;
	temp->next = start;
	start = temp;
}
void list::insertlast(int ele)
{
	struct node* temp, *cur;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	if (start == NULL)
		start = temp;
	else
		cur = start;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = temp;
}
void list::insertafter(int sel, int ele)
{
	if (start != NULL)
	{
		struct node *cur;
		cur = start;
		while (cur != NULL && cur->data != sel)
		{
			cur = cur->next;
		}
		if (cur != NULL)
		{
			struct node* temp;
			temp = new node;
			temp->data = ele;
			temp->next = cur->next;
			cur->next = temp;
		}
		else
		{
			cout << "not found";
		}
	}
	else
	{
		cout << "list is empty";
	}
}
void list::insertbefore(int sel, int ele)
{
	if (start->data == sel)
	{
		struct node* temp;
		temp = new node;
		temp->data = ele;
		temp->next = start;
		start = temp;
	}
	else
	{

	}
}
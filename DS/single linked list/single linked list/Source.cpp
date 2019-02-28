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
	void print(struct node*);
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
	struct node* temp=NULL, *cur=NULL;
	temp = new node;
	temp->data = ele;
	temp->next = NULL;
	if (start == NULL)
		start = temp;
	else
		cur = start;
	while (cur->next!= NULL)
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
		if (start != NULL)
		{
			struct node* cur;
			cur = start;
			while (cur->next != NULL && cur->next->data != sel)
				cur = cur->next;
			if (cur->next!= NULL)
			{
				struct node*temp;
				temp = new node;
				temp->data = ele;
				temp->next = cur->next;
				cur->next = temp;
			}
			else
				cout << "ele not found";
		}
		else
			cout << "list is empty";
	}
}
int list::deletefirst()
{
	int x = -999;
	if (start != NULL)
	{
		struct node* temp;
		temp = start;
		start = start->next;
		x = temp->data;
		delete temp;
	}
	else
		cout << "list is empty";
	return x;
}
int list::deletelast()
{
	int x = -999;
	if (start != NULL)
	{
		if (start->next == NULL)
		{
			x = start->data;
			delete start;
			start = NULL;
		}
		else
		{
			struct node* cur;
			cur = start;
			while (cur->next->next != NULL)
				cur = cur->next;
			x = cur->next->data;
			delete cur->next;
			cur->next = NULL;
		}
	}
	else
		cout << "list is empty";
	return x;
}
void list::deletespec(int sel)
{
	if (start != NULL)
	{
		struct node*temp=NULL;
		struct node*cur=NULL;
		if (start->data == sel)
		{

			temp = start;
			start = temp->next;
			delete temp;
		}
		else
		{
			cur = temp;
			while (cur->next != NULL && cur->next->data != sel)
				cur = cur->next;
			if (cur->next != NULL)
			{
				temp = cur->next;
				cur->next = temp->next;
				delete temp;
			}
			else
				cout << "ele not found";
		}
	}
	else
		cout << "list is empty";
}
void list::traverseF()
{
	struct node *cur;
	cur = start;
	while (cur != NULL)
	{
		cout << cur->data << "-->";
		cur = cur->next;
	}
}
void list::print(struct node *cur)
{
	if (cur != NULL)
	{
		print(cur->next);
		cout << cur->data <<"-->";
	}
}
void list::traverseB()
{
	if (start != NULL)
	{
		print(start);
	}
}
list::~list()
{
	while (start != NULL)
	{
		struct node* temp;
		temp = start;
		start = temp->next;
		delete temp;
	}
}

int main()
{
	list a;
	a.insertfirst(1);
	a.insertfirst(2);
	a.insertfirst(3);
	a.insertfirst(4);
	a.traverseF();
	cout << endl;
	a.insertafter(3,7);
	a.traverseF();
	cout << endl;
	a.insertbefore(2, 9);
	a.traverseF();
	cout << endl;
	a.deletefirst();
	a.traverseF();
	cout << endl;
	a.deletelast();
	a.traverseF();
	cout << endl;
	a.deletespec(3);
	a.traverseF();
	cout << endl;
	a.traverseB();
	cout << endl;
	system("pause");
	return 0;
}
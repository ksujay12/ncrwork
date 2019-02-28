#include<iostream>
using namespace std;
struct node
{
	int pow;
	int data;
	struct node* next;
};
class list
{
	struct node* start;
public:
	list();
	
	void insertlast(int,int);
	void add(struct node*, struct node*);
	
	void traverseF();
	friend void add(list a, list b);
	
	
};
list::list()
{
	start = NULL;
}

void list::insertlast(int cof,int p)
{
	struct node* temp, *cur=NULL;
	temp = new node;
	temp->data = cof;
	temp->pow = p;
	temp->next = NULL;
	if (start == NULL)
		start = temp;
	else
	{
		cur = start;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = temp;
	}
}

 
void list::traverseF()
{
	struct node *cur;
	cur = start;
	while (cur != NULL)
	{
		cout << cur->data <<"X"<<cur->pow<< "-->";
		cur = cur->next;
	}
}


void add(list l1, list l2)
{
	struct node *a;
	struct node *b;
	a = l1.start;
	b = l2.start;
	struct node *res;
	res = new node;

	while (a != NULL && b != NULL)
	{
		if (a->pow == b->pow)
		{
			res->data = a->data + b->data;
			res->pow = a->pow;
			a = a->next;
			b = b->next;
			cout << res->data<<"X"<<res->pow << "-->";
		}
		else
		{
			if (a->pow > b->pow)
			{
				cout << a->data << "X" << a ->pow << "-->";
				a = a->next;
			}
			else if(a->pow<b->pow)
			{
				cout << b->data << "X" << b->pow << "-->";
				b = b->next;
			}
		}
	}
	while (a != NULL)
	{
		cout << a->data << "X" << a->pow<<"-->";
		a = a->next;
	}
	while (b != NULL)
	{
		cout << b->data << "X" << b->pow << "-->";
		b = b->next;
	}
}

int main()
{
	list m, n;
	m.insertlast(1,3);
	m.insertlast(2, 2);
	m.insertlast(3, 1);
	m.traverseF();
	n.insertlast(1, 3);
	n.insertlast(2, 2);
	n.insertlast(3, 1);
	n.traverseF();
	cout << endl;
	add(m, n);
	system("pause");
	return 0;
}
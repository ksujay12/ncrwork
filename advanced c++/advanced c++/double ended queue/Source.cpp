#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
class Deque
{
	struct node *front;
	struct node *rear;
public:
	Deque()
	{
		front = NULL;
		rear = NULL;
	}
	void InsertFront(int element);
	void InsertRear(int element);
	void DeleteFront();
	void DeleteRear();
	void Display();
	~Deque()
	{
		struct node *cur, *temp;
		cur = front;
		while (cur != NULL)
		{
			temp = cur;
			cur = cur->next;
			delete temp;
		}
		front = NULL;
		cout << "memory deallocated" << endl;
	}
	
};
void Deque::InsertFront(int element)
{
	struct node *newNode;
	newNode = new node;
	if (newNode == NULL)
	{
		cout << "memory cannot be allocated" << endl;
	}
	newNode->data = element;
	if (front == NULL)
	{
		front = newNode;
		rear = newNode;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	else
	{
		newNode->next=front;
		newNode->prev = NULL;
		front = newNode;
	}
}
void Deque::InsertRear(int element)
{
	struct node *newNode;
	newNode = new node;
	if (newNode == NULL)
	{
		cout << "memory cannot be allocated" << endl;
	}
	newNode->data = element;
	if (rear == NULL)
	{
		front = newNode;
		rear = newNode;
		newNode->next = NULL;
		newNode->prev = NULL;
	}
	else
	{
		newNode->prev = rear;
		newNode->next = NULL;
		rear->next = newNode;
		rear = newNode;
	}
}


void Deque::Display()
{
	struct node *temp;
	temp = front;
	while (temp != NULL)
	{
		cout << temp->data << "-->";
		temp = temp->next;
	}
}
void Deque::DeleteFront()
{
	if (front == NULL)
	{
		cout << "EMPTY" << endl;
	}
	else
	{
		struct node* temp;
		temp = front;
		if (rear == front) 
		{
			rear = NULL;
			front = NULL;
			delete(temp);
			cout << "element deleted successfully" << endl;
		}
		else
		{
			front = temp->next;
			front->prev = NULL;
			delete(temp);
			cout << "element deleted successfully" << endl;
		}
	}
}

void Deque::DeleteRear()
{
	if (rear == NULL)
	{
		cout << "EMPTY" << endl;
	}
	else
	{
		struct node* temp;
		temp = rear;
		if (rear == front)
		{
			rear = NULL;
			front = NULL;
			delete(temp);
			cout << "element deleted successfully" << endl;
		}
		else
		{
			 rear= temp->prev;
			rear->next = NULL;
			delete(temp);
			cout << "element deleted successfully" << endl;
		}
	}
}

class Stack : private Deque
{
public:
	void Push()
	{

		int inputElement;
		cout << "enter the element to push" << endl;
		cin >> inputElement;
		InsertRear(inputElement);
	}
	void Pop() {
		
		DeleteRear();
	}
	void StackDisplay()
	{
		Display();
	}
};
class Queue : private Deque
{
public:
	void Enqueue()
	{
		int inputElement;
		cout << "enter the elements to enqueue" << endl;
		cin >> inputElement;
		InsertRear(inputElement);
	}
	void Dequeue() 
	{
		DeleteFront();
	}
	void QueueDisplay()
	{
		Display();
	}
};

int main()
{
	Stack stackObj;
	Queue queueObj;
	int choice;
	while (1)
	{
		cout << endl;
		cout << "enter the choice" << endl;
		cout << "1-insert element into stack" << endl;
		cout << "2-delete element from stack" << endl;
		cout << "3-enqueue into queue" << endl;
		cout << "4-deque from queue" << endl;
		cout << "5-display stack elements" << endl;
		cout << "6-display queue elements" << endl;
		cout << "7-EXIT" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			stackObj.Push();
			break;
		case 2:
			stackObj.Pop();
			break;
		case 3:
			queueObj.Enqueue();
			break;
		case 4:
			queueObj.Dequeue();
			break;
		case 5:
			stackObj.StackDisplay();
			break;
		case 6:
			queueObj.QueueDisplay();
			break;
		case 7:
			exit(1);
		}
	}
	system("pause");
	return 0;

}
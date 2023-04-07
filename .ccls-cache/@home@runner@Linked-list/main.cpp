#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *Head;
void insertData(int value)
{
	Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = NULL;
	
	if (Head == NULL)
	{
		Head = new_node;
	}
	else
	{
		new_node->next = Head;
		Head = new_node;
	}
}
void display()
{
	Node *node;
	node = Head;
	do
	{
		cout<<node->data<<" ";
		node = node->next;
	}while(node != NULL);
}
int main() 
{
	int option;
	int data;
	while(option!=3)
	{
		cout<<"\nOptions";
		cout<<"\n1. Add elements to Linked list ";
		cout<<"\n2. Display Linked list";
		cout<<"\n3. Exit";
		cout<<"\nEnter your choice : ";
		cin>>option;
		if(option==1)
		{
			cout<<"\nEnter element : ";
			cin>>data;
			insertData(data);
		}
		else if(option==2)
		{
			cout<<"The linked list is : ";
			display();
		}
	}
	return(0);
}
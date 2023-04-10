#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *Head;

//Function to Insert Data
void InsertData()
{
	int item;
	cout<<"\nEnter element : ";
	cin>>item;
	Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = item;
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

//Function to Display Linked List
void Display()
{
	cout<<"The linked list is : ";
	Node *node;
	node = Head;
	do
	{
		cout<<node->data<<" ";
		node = node->next;
	}while(node != NULL);
}

//Function to Search Item
void Search()
{
	
	Node *node = Head;
	int item;
	bool isFound = false;
	cout<<"\nEnter the Item to Search : ";
	cin>>item;
	do
	{
		if(node->data == item)
		{
			isFound = true;
		}
		node = node->next;
	}while(node->next != NULL);
	if(isFound)
	{
		cout<<"\nItem Found";
	}
	else
	{
		cout<<"\nItem Not Found";
	}
}


int main() 
{
	int option;
	while(option!=0)
	{
		cout<<"\nOptions";
		cout<<"\n1. Add elements to Linked list ";
		cout<<"\n2. Display Linked list";
		cout<<"\n3. Search item";
		cout<<"\n0. Exit";
		cout<<"\nEnter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
			InsertData();
			break;
			case 2:
			Display();
			break;
			case 3:
			Search();
			break;
			
		}
	}
	return(0);
}
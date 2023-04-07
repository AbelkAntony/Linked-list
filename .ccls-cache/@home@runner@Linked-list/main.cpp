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
		cout<<"\nData ";
		cout<<node->data<<" ";
		node = node->next;
	}while(node != NULL);
}
int main() 
{
	insertData(2);
	insertData(5);
	insertData(8);
	insertData(9);
	cout<<"The linked list is : ";
	display();
	return(0);
}
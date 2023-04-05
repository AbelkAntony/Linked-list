#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

struct Node *Head = NULL ;
void insertData(int value)
{
	Node *new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = value;
	new_node->next = NULL;
	
	if (Head->next == NULL)
	{
		Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		Head->next = new_node;
	
		
	}
}

int main() 
{

}
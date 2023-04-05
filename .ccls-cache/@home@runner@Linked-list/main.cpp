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
	if (Head->next == NULL)
	{
		Node *new_node = (struct Node*)malloc(sizeof(struct Node));
		Head->next = new_node;
		
	}
}

int main() 
{

}
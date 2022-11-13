#include <iostream>

using namespace std;

//linked list node
class Node
{
	public:
		int data;
		Node* next;
};

void push(Node** head_ref, int new_data)
{
	//allocate node
	Node* new_node = new Node();

	//gives data
	new_node->data = new_data;

	//makes next of new node as head
	new_node->next = (*head_ref);

	//moves the head to point to the new node
	(*head_ref) = new_node;
}

void append(Node** head_ref, int new_data)
{
	//allocate node
	Node* new_node = new Node();

	Node *last  = *head_ref;

	//assign data
	new_node->data = new_data;

	//new node is made to be last node of the list
	//must be NULL to be able to stop traversal
	new_node->next = NULL;

	//checks if LL is empty
	//makes the new node as head
	
	if(*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	//traverse until the last node
	
	while(last->next != NULL)
	{
		last = last->next;
	}

	//change the next of the last node
	last->next = new_node;
	return;
}

//prints LL
void printList(Node *node)
{
	while(node != NULL)
	{
		cout << " " << node->data;
		node = node->next;
	}
}

int main()
{
	Node* head = NULL;

	//adds at the head of LL
	push(&head, 7);
	//7
	push(&head, 1);
	//1 7
	push(&head, 9);
	//9 1 7 
	
	//add's at the tail LL
	append(&head, 5);
	//9 1 7 5
	append(&head, 2);
	//9 1 7 5 2
	append(&head, 9);
	//9 1 7 5 2 9

	printList(head);
}

/*
	LL is a linear DS
	LL elements are not stored at a contigous location, linked using pointers
	They are a series of connected nodes
	Nodes stores the data and address of the next node

	Advantages of Linked Lists over arrays
		Dynamic Array
		Ease of Insertion/Deletion
	
	Disadvantages 
		No random access
		Extra mem space for a pointer w/ each element of the list
		not cache friendly

	Types of LL
		Singly - more or traverse LL in only one direction
		Doubly - cam ,pve pr traverse LL forward and backward
		Circular - last node of LL links to first/head node of LL in its next pointer and 
			   first/head contains the link of the last node of the LL in it's prev pointer
*/

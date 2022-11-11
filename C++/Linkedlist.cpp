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

	push(&head, 7);
	push(&head, 1);
	push(&head, 9);

	printList(head);


}

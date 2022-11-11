#include <iostream>

using namespace std;

// binary tree set up
struct Node
{
	int data; //node value
	struct Node *left, *right; //left and right child
};

//utiltiy function to create a new tree node
Node* newNode(int data)
{
	//allocates new node
	Node* temp = new Node;

	//sets temp to equal node value
	temp->data = data;

	temp->left = temp->right = NULL;
	return temp;
}

//definition
Node* create(int data)
{
	Node* newNode = new Node();

	if(!newNode)
	{
		return NULL;
	}

	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//inorrder printing
void printInorder(struct Node* node)
{
	if(node == NULL)
	{
		return;
	}

	//recursion to left side of until null
	printInorder(node->left);

	//prints data of node
	cout << node->data << " ";

	//recursion to right side until null
	printInorder(node->right);
}

void printPreorder(struct Node* node)
{
	if(node == NULL)
	{
		return;
	}

	//prints the data of the node first
	cout << node->data << " ";
	
	//recursion on the left
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	//create root
	struct Node* root = newNode(1);

	//left child
	root->left = newNode(2);

	//right child
	root->right = newNode(3);

	root->left->left = newNode(4);

	root->left->right = newNode(5);

	//print node
	printInorder(root); //4 2 5 1 3
	cout << endl;
	printPreorder(root); //
}

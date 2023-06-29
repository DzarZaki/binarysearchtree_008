#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rifghtchild;

	// Constructor for the node class 
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rifghtchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; // Initializing ROOT to null
	}
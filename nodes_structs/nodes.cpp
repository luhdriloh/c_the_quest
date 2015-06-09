#include <iostream>

using std::cout;
using std::endl;

struct node
{
	node *next;
	double value;
};


int main ()
{
	node *root = new node;
	int node_num;

	node *current = root;

	root -> value = 80085;

	for (int i = 0 ; i < 100; i++)
	{
		node *x = new node;
		x -> value = i * 2.53;
		current -> next = x;
		current = x;
	}

	current = root;
	node_num = 0;

	while (current -> next)
	{
		cout << "Node number: " << node_num << endl;
		cout << "Node value: " << current -> value << "\n" << endl;
		current = current -> next;
		node_num++;
	}
	
	return 0;
}
// Graph implementation file
// A program to create a graph of n vertices using an adjacency list. 
// It reads and prints its information and finally deletes the graph.
#include <iostream>
#include <cstdlib>
#include "graph_adjlist.h"

using namespace std;

Graph::Graph(int n)
{
	no_of_nodes = n;

	// Start With List Of nullptrs.
	for(int i = 0; i < no_of_nodes; i++)
		Adj[i] = nullptr;

	node* new_node; 
	node* last;
	int i, j, k, val;

	// Assign Number Of Adjacent Vertices(Neighbours) From Each Vertex.
	for(i = 0; i < no_of_nodes; i++)
	{
		// Initialize Last Node As Empty.
		last = nullptr;
		cout << "\n Enter the number of neighbours of node " << i << " : ";
		cin >> k;

		// Assign Each Vertex's Neighbour's Pointing To Each Other.
		for(j = 1; j <= k; j++)
		{
			cout << "\t Enter the neighbour " << j << " of node " << i << " : ";
			cin >> val;

			new_node = new node;
			new_node->vertex = val;
			new_node->next = nullptr;
			
			if (Adj[i] == nullptr)
				// Put The Node In Array.
				Adj[i] = new_node;
			else
				// Index Is Occupied And Node Is Assigned To Last's Next Node.
				last -> next = new_node;

			// Last Itself Is The Node As Well.
			// The Node Points To Itself.
			last = new_node;
		}
	}
}

void Graph::displayGraph()
{
	node* ptr;
	int i;

	// Assign ptr With Value Of Each Vertex.
	for(i = 0; i < no_of_nodes; i++)
	{
		ptr = Adj[i];
		cout << "\n\t The neighbours of node " << i << " are : ";

		while(ptr != nullptr)
		{
			// Print All Of Each One's Neighbours.
			cout << "\t" << ptr->vertex;
			ptr = ptr->next;
		}
	}
}

Graph::~Graph()
{
	int i;
	node* temp;
	node* ptr;

	// Free The Array And Override All To Empty.
	for(i = 0; i <= no_of_nodes; i++)
	{
		ptr = Adj[i];
		while(ptr != nullptr)
		{
			temp = ptr;
			ptr = ptr->next;
			delete temp;
		}
		Adj[i] = nullptr;
	}
}


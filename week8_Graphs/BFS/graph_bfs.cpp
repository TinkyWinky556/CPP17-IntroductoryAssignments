// Graphs -- BFS Algorithm
// a program to implement the breadth-first search algorithm.
#include <iostream>
#include "queue.cpp"
#include <list>
#include <iterator>

#define NUM_VERTICES 5

using namespace std;

class Graph{
	private:
		int numVertices;
		Queue MyQueue;
		list<int> *adjLists;
		bool *visited;

	public:
		Graph();
		~Graph();

		/*
			Path :
			Source(Vertex) -> Destination(Vertex)
		*/
		void addEdge(const int& source, const int& destination);

		void BFS(const int& start_vertex);
};

Graph::Graph(){
	this->numVertices = NUM_VERTICES;
	this->adjLists = new list<int>[NUM_VERTICES];
	this->visited = new bool[NUM_VERTICES];
}

Graph::~Graph(){
	this->adjLists = nullptr;
	this->visited = nullptr;
}

void Graph::addEdge(const int& source, const int& destination){
	adjLists[source].push_front(destination);
	return;
}

void Graph::BFS(const int& start_vertex){
	list<int>::iterator itr;
	bool *visited_vertices = new bool[numVertices];

	// Initialize Visited To False.
	for(int i = 0; i < numVertices; i++)
		visited_vertices[i] = false;
	
	// Visit Specified Vertex & Put It In Queue.
	visited[start_vertex] = true;
	MyQueue.insert(start_vertex);

	cout << "Visited Vertices :" << "\n";
	while(!MyQueue.empty()){
		// Visit FrontMost Element In Queue, Then Remove It From The Queue.
		int this_vertex = MyQueue.peek();
		cout << this_vertex << "\n";
		MyQueue.delete_element();

		// Loop To Visit The Rest Of Unvisited Neighbours.
		for(auto itr = adjLists[this_vertex].begin(); itr != adjLists[this_vertex].end(); ++itr){
			int adjVertex = *itr;

			if(!visited[adjVertex]){
				visited[adjVertex] = true;
				MyQueue.insert(adjVertex);
			}
		}
	}

}

int main(){
	Graph MyGraph;
  	// First Row In Adjacency Matrix :
	MyGraph.addEdge(0, 1);
	MyGraph.addEdge(0, 3);

	// Second Row :
	MyGraph.addEdge(1, 0);

	// Third Row :
	MyGraph.addEdge(2, 4);

	// Fourth Row :
	MyGraph.addEdge(3, 0);
	MyGraph.addEdge(3, 4);

	// Fifth Row :
	MyGraph.addEdge(4, 2);
	MyGraph.addEdge(4, 3);

  	MyGraph.BFS(2);

	return 0;
}

/*
Output :

The graph in the adjacency matrix is :
0 1 0 1 0
1 0 0 0 0
0 0 0 0 1
1 0 0 0 1
0 0 1 1 0	------------>	0, 1, 2, 3, 4

Visited Vertices :
2
4
3
0
1
*/

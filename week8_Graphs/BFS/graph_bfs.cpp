// Graphs -- BFS Algorithm
// a program to implement the breadth-first search algorithm.
#include <iostream>
#include "queue.cpp"
#include <list>
#include <iterator>

#define NUM_VERTICES 10

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

	delete[] adjLists;
	delete[] visited;
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
  	// First Row :
	MyGraph.addEdge(0, 1);
	MyGraph.addEdge(0, 5);
	MyGraph.addEdge(0, 8);

	// Second Row :
	MyGraph.addEdge(1, 0);
	MyGraph.addEdge(1, 2);
	MyGraph.addEdge(1, 4);

	// Third Row :
	MyGraph.addEdge(2, 1);
	MyGraph.addEdge(2, 3);
	MyGraph.addEdge(2, 4);

	// Fourth Row :
	MyGraph.addEdge(3, 2);
	MyGraph.addEdge(3, 6);
	MyGraph.addEdge(3, 7);

	// Fifth Row :
	MyGraph.addEdge(4, 1);
	MyGraph.addEdge(4, 2);
	MyGraph.addEdge(4, 6);

	// Sixth Row :
	MyGraph.addEdge(5, 0);
	MyGraph.addEdge(5, 6);

	// Seventh Row :
	MyGraph.addEdge(6, 3);
	MyGraph.addEdge(6, 4);
	MyGraph.addEdge(6, 5);

	// Eighth Row :
	MyGraph.addEdge(7, 3);

	// Ninth Row :
	MyGraph.addEdge(8, 0);

	// 0 As Start Vertex For The BFS.
	MyGraph.BFS(0);

	return 0;
}

/*
Output :
Used The 3rd Graph Below.

The adjacency matrix for the graph is :
   0 1 2 3 4 5 6 7 8
0 [0 1 0 0 0 1 0 0 1]
1 [1 0 1 0 1 0 0 0 0]
2 [0 1 0 1 1 0 0 0 0]
3 [0 0 1 0 0 0 1 1 0]
4 [0 1 1 0 0 0 1 0 0]
5 [1 0 0 0 0 0 1 0 0]
6 [0 0 0 1 1 1 0 0 0]
7 [0 0 0 1 0 0 0 0 0]
8 [1 0 0 0 0 0 0 0 0]

Visited Vertices :
0
8
5
1
6
4
2
3
7
*/

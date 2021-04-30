// Queue
// a program to implement a queue using a normal array (linear array)
#ifndef _QUEUE
#define _QUEUE

#include <iostream>
#include <vector>
#define MAX 10 // Changing this value will change length of array
using namespace std;

class Queue
{
private:
	int queue[MAX];
	int front = -1;
	int rear = -1;

public:
	void insert(const int& num);
	int delete_element();
	int peek();
	bool empty() const;
	void display();
	vector<int> traverse();
	
};

#endif

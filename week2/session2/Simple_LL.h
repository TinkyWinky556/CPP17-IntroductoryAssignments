#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct NODE {
	int data;
	NODE<int>* link;
};

class SimpleLL {
	public:
		void insert(const int& item);
        void print();
		bool search(const int& item);
		void destroy(const int& item);
		SimpleLL();
		~SimpleLL();
		
	private:
		int count;
		NODE<int>* first;
		NODE<int>* last;
};

// Your code here
void SimpleLL::insert(const int& item){
    // Create a new node for the item.
    NODE<int>* new_node = new NODE<int>();
    new_node->data = item;
    new_node->link = NULL;
    
    // first -> new_node -> last.
    if(first->link == NULL){
        first = new_node;
        last = new_node;
    }
    else{
        last->link = new_node;
        new_node->link = NULL;
        last = last->link;
    }
}

void SimpleLL::print(){
    while(first->link != NULL){
        cout << "Data = " << first->data;
        first = first->link;
    }
}

bool SimpleLL::search(const int& item){
    while(first->link != NULL){
        first = first->link;

        if(first->data == item){
            return true;
        }
    }
    // exiting while loop without a return value means item is not found. 
    return false;
}

void SimpleLL::destroy(const int& item){
    // Preceding node requires pointer redirection onto the node after item.
    NODE<int>* previous;
    NODE<int>* after;

    while(first->link != NULL){
        previous = first;
        first = first->link;

        // The node after item is now the new head.
        if(previous->data == item){
            after = previous->link;
            first = after;
            delete(previous);
        }
    }
}

SimpleLL::SimpleLL(){
    first = NULL;
    last = NULL;
}

SimpleLL::~SimpleLL(){}
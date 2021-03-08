#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100

class Stack{
    public:
        int top;
        int my_stack[MAX];

        Stack(){top = -1;}

        void push(int el);
        int pop();
        int peek();
        void display();
        void reverse_stack();
        bool is_empty();
        bool is_full();
};

bool Stack::is_empty(){
    return (top < 0);
}

bool Stack::is_full(){
    if(top == MAX - 1){
        return true;
    }
    else{
        return false;
    }
}

void Stack::push(int el){
    if(Stack::is_full() == true){
        cout << "Stack Is Full !";
    }
    else{
        my_stack[++top] = el;
        cout << el << " Pushed In Stack." << "\n";
    }
}

void Stack::display(){
    if(top >= 0){
        for(int i = top; i >= 0; i--){
            cout << my_stack[i] << " ";
        }
        cout << endl;
   }
   else{
        cout << "Stack is empty";
   }
}

// Added Reversing Feature.
void Stack::reverse_stack(){
    for(int i = 0; i <= top; i++){
        cout << my_stack[i] << " ";
    }
    cout << endl;
}

int Stack::pop(){
    if(Stack::is_empty() == true){
        cout << "Stack Is Empty !";
    }
    else{
        return my_stack[top--];
    }
}

int Stack::peek(){
    if(Stack::is_empty() == true){
        cout << "Stack Is Empty !";
    }
    else{
        return my_stack[top];
    }
}

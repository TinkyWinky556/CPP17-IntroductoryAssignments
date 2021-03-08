#include <iostream>
using namespace std;

#define MAX 100

template <class T>
class Stack{
    private:
	    T stack[MAX];
	    T top = -1;

    public:
	    void push(T val);
	    T pop();
	    T peek();
	    void display();

};

template <class T>
void Stack<T>::push(T val){
    if(top == MAX - 1){
        cout << "Stack Is Full.";
    }
    else{
        stack[++top] = val;
        cout << "Successfully Pushed.";
    }
}

template <class T>
T Stack<T>::pop(){
    if(top < 0){
        cout << "Stack Is Empty.";
    }
    else{
        return stack[top--];
    }
}

template <class T>
T Stack<T>::peek(){
    if(top < 0){
        cout << "Stack Is Empty.";
    }
    else{
        return stack[top];
    }
}

template <class T>
void Stack<T>::display(){
    if(top >= 0){
        for(int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
        cout << endl;
   }
   else{
        cout << "Stack is empty";
   }
}
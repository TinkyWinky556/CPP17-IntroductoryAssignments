#include <iostream>
#include <cstdlib>
#include "stack_template.h"
using namespace std;

int main(){
    Stack<int> mystack;
    int option;
    int push_element;

    while(true){
        cout << "*****MAIN MENU*****" << "\n";
        cout << "1. PUSH" << "\n";
        cout << "2. POP" << "\n";
        cout << "3. PEEK" << "\n";
        cout << "4. DISPLAY" << "\n";
        cout << "5. EXIT" "\n";

        cout << "Specify An Option = ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Value For Stack = ";
                cin >> push_element;
                mystack.push(push_element);
                break;

            case 2:
                cout << mystack.pop() << "Removed.";
                break;

            case 3:
                cout << "Last Pushed = " << mystack.peek();
                break;

            case 4:
                mystack.display();
                break;

            case 5:
                exit(0);
                break;
        }
    }    
}
#include <iostream>
#include <cstdlib>
#include "stack.h"
using namespace std;

int main(){
    Stack my_stackObj;
    int option;
    int push_el;

    while(true){
        cout << "*****MAIN MENU*****" << "\n";
        cout << "1. PUSH" << "\n";
        cout << "2. POP" << "\n";
        cout << "3. PEEK" << "\n";
        cout << "4. DISPLAY" << "\n";
        cout << "5. REVERSE" << "\n";
        cout << "6. EXIT" "\n";

        cout << "Specify An Option = ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Value For Stack = ";
                cin >> push_el;
                my_stackObj.push(push_el);
                break;

            case 2:
                cout << my_stackObj.pop() << "Removed.";
                break;

            case 3:
                cout << "Last Pushed = " << my_stackObj.peek();
                break;

            case 4:
                my_stackObj.display();
                break;

            case 5:
                my_stackObj.reverse_stack();
                break;

            case 6:
                exit(0);
                break;
        }
    }    
}
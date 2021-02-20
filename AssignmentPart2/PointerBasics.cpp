#include <iostream>
using namespace std;

int main(){

	signed int x = 99;

    cout << "The content of x is " << x << endl;
	cout << "The address of x is " << &x << endl;

	// your code here :
    // Create a pointer variable and assign the address of the variable defined in step 1 to it.
    int *ptr = &x;

    // Print out the value of the pointer variable and the value stored in the address it is currently pointing to.
    cout << "Pointer Memory Address = " << ptr << "\n";
    cout << "Which Points To This Value : " << x << "\n";

    // Change the value stored in the address it is currently pointing to 115.
    /*
        Memory Address Does Not Change, But Assigned Value Does.
    */
    x = 115;

    // Print out the value of the pointer variable and the value stored in the address it is currently pointing to.
    cout << "Pointer Memory Address After Value Is Overridden = " << ptr << "\n";
    cout << "Which Points To This Value : " << x;

    // Create another pointer variable, and use the "new" keyword to create a dynamic storage for the pointer variable.
    int *ptr2 = new signed int;

    // Assign 333 to this storage.
    *ptr2 = 333;

}
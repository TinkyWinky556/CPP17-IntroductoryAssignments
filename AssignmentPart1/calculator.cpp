#include <iostream>
using namespace std;

// Encapsulation Is Implemented In Order To Set & Get First & Second Numbers.
class my_calculator {
    private:
    double my_num1;
    double my_num2;
    double result;

    public:
    void set_first_number(double n1){
        my_num1 = n1;
    }

    void set_second_number(double n2){
        my_num2 = n2;
    }

    double add(){
        return my_num1 + my_num2;
    }

    double substract(){
        return my_num1 - my_num2;
    }

    double multiply(){
        return my_num1 * my_num2;
    }

    double divide(){
        return my_num1 / my_num2;
    }
};

int main(){
    my_calculator calculator_obj;
    double input1;
    double input2;
    int option;

    // prompt for input
	cout << "Enter the first number " << endl;
	cin >> input1;
    calculator_obj.set_first_number(input1);
	
	cout << "Enter the second number " << endl;
	cin >> input2;
    calculator_obj.set_second_number(input2);

    cout << "What calculation you want to do?" << endl;
	cout << "Choose the following option:" << endl;
	cout << "choose 1: addition" << endl;
	cout << "choose 2: subtraction" << endl;
	cout << "choose 3: multiplication" << endl;
	cout << "choose 4: division" << endl;
	cin >> option;

    switch (option){
        case 1:
            cout << input1 << "+" << input2 << "=" << calculator_obj.add() << endl;
            break;
        
        case 2:
            cout << input1 << "-" << input2 << "=" << calculator_obj.substract() << endl;
            break;

        case 3:
            cout << input1 << "*" << input2 << "=" << calculator_obj.multiply() << endl;
            break;

        case 4:
            cout << input1 << "/" << input2 << "=" << calculator_obj.divide() << endl;
            break;

    }
}
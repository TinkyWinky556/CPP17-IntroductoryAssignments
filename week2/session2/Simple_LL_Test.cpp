#include <iostream>
#include <string>
#include "Simple_LL.h"

using namespace std;

int main(){
	SimpleLL list;
	int num, num2, num3, num4;
	
	cout << "Enter a number = "<< endl;
	cin >> num;
    list.insert(num);

    cout << "Enter a number = " << endl;
	cin >> num2;
    list.insert(num2);

    cout << "Enter a number = " << endl;
	cin >> num3;
    list.insert(num3);

    cout << "Enter a number = " << endl;
	cin >> num4;
    list.insert(num4);

    list.print();
}
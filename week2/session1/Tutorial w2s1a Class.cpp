#include <iostream>
using namespace std;

class Box{
	private:
	double length;
	double width;
	double height;

	public:
	void set_length(double l);
	void set_width(double w);
	void set_height(double h);
	double calculate_area();
	double calculate_volume();

};


void Box::set_length(double l){
	length = l;
}

void Box::set_width(double w){
	width = w;
}

void Box::set_height(double h){
	height = h;
}

double Box::calculate_area(){
	return length * width;
}

double Box::calculate_volume(){
	return length * width * height;
}


int main() {
	Box myBox;
	double input_length;
	double input_width; 
	double input_height;

	cout << "Specify Length = ";
	cin >> input_length;
	myBox.set_length(input_length);

	cout << "Specify Width = ";
	cin >> input_width;
	myBox.set_width(input_width);

	cout << "Specify Height = ";
	cin >> input_height;
	myBox.set_height(input_height);

	cout << "Box's Area : " << "\n";
	cout << myBox.calculate_area() << "\n";

	cout << "Box's Volume :" << "\n";
	cout << myBox.calculate_volume();

	return 0;

}
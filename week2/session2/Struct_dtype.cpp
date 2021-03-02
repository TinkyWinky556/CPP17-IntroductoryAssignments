#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
};

int main(){
	Student s;
	Student* sptr;
	
	long int sid;
	string sname;
	double sgpa;

    // Your Code Here.
    // Allocate New Struct Memory For ptr.
    sptr = new Student;

    cout << "Enter Student ID = ";
    cin >> sid;

    cout << "Enter Student Name = ";
    cin >> sname;

    cout << "Enter GPA = ";
    cin >> sgpa;

    // Passing Variables To Struct.
    sptr->id = sid;
    sptr->name = sname;
    sptr->gpa = sgpa;

    // Display Information.
    cout << "Student Details : " << "\n";
    cout << "ID = " << sptr->id << "\n";
    cout << "Name = " << sptr->name << "\n";
    cout << "GPA = " << sptr->gpa;

    return 0;

}
#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
	Student* link;
};

int main(){
	Student* head;
	Student* current;
	Student* newnode;
    Student* third;
    Student* tail;
	
    head = new Student;
    newnode = new Student;
    third = new Student;
    tail = new Student;

/*
First Node Is Current.
*/
    int sid;
	string sname;
	double sgpa;

	cout << "Enter student id: ";
	cin >> sid;
	cout << "Enter student name: ";
	cin >> sname;
	cout << "Enter student gpa: ";
	cin >> sgpa;
  
	current = head;
	current->id = sid;
	current->name = sname;
	current->gpa = sgpa;
	current->link = newnode; // head -> newnode.

/*
Second Node Is New-Node.
*/
	// Your code here
    int sid2;
    string sname2;
    double sgpa2;

    cout << "Enter student id: ";
	cin >> sid2;
	cout << "Enter student name: ";
	cin >> sname2;
	cout << "Enter student gpa: ";
	cin >> sgpa2;

    newnode->id = sid2;
    newnode->name = sname2;
    newnode->gpa = sgpa2;
    newnode->link = third; // newnode -> third.

/*
Third Node Is Third.
*/
    int sid3;
    string sname3;
    double sgpa3;

    cout << "Enter student id: ";
	cin >> sid3;
	cout << "Enter student name: ";
	cin >> sname3;
	cout << "Enter student gpa: ";
	cin >> sgpa3;

    third->id = sid3;
    third->name = sname3;
    third->gpa = sgpa3;
    third->link = tail; // third -> tail.

/*
Last Node Is Tail.
*/
    int sid4;
    string sname4;
    double sgpa4;

    cout << "Enter student id: ";
	cin >> sid4;
	cout << "Enter student name: ";
	cin >> sname4;
	cout << "Enter student gpa: ";
	cin >> sgpa4;

    tail->id = sid4;
    tail->name = sname4;
    tail->gpa = sgpa4;
    tail->link = nullptr; // tail -> Null Memory Address.

/*
Print Every Node.
*/
    cout << current->id << "\n";
    cout << current->name << "\n";
    cout << current->gpa << "\n";

    cout << newnode->id << "\n";
    cout << newnode->name << "\n";
    cout << newnode->gpa << "\n";

    cout << third->id << "\n";
    cout << third->name << "\n";
    cout << third->gpa << "\n";

    cout << tail->id << "\n";
    cout << tail->name << "\n";
    cout << tail->gpa << "\n";
   
}
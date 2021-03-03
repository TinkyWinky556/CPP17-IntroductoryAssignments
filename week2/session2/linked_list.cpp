#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
        string user_name;
        string user_id;
        Node* next;
};

int main(){
    // Head Will be assigned to first !
    Node* head;
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* tail = NULL;

    // allocate nodes, except head.
    first = new Node();
    second = new Node();
    third = new Node();
    tail = new Node();

    // Assign values from user input.
    // Connect Nodes as well.
    string usern1, usern2, usern3, usern4;
    string userid1, userid2, userid3, userid4;

    //============== FIRST NODE =================//
    cout << "Enter Username 1 = ";
    getline(cin, usern1);

    cout << "Enter User-ID 1 = ";
    getline(cin, userid1);

    first->user_name = usern1;
    first->user_id = userid1;
    first->next = second;
    //============================================//

    //================ SECOND NODE ===============//
    cout << "Enter Username 2 = ";
    getline(cin, usern2);

    cout << "Enter User-ID 2 = ";
    getline(cin, userid2);

    second->user_name = usern2;
    second->user_id = userid2;
    second->next = third;
    //============================================//

    //================ THIRD NODE ================//
    cout << "Enter Username 3 = ";
    getline(cin, usern3);

    cout << "Enter User-ID 3 = ";
    getline(cin, userid3);

    third->user_name = usern3;
    third->user_id = userid3;
    third->next = tail;
    //============================================//

    //================ TAIL NODE =================//
    cout << "Enter Username 4 = ";
    getline(cin, usern4);

    cout << "Enter User-ID 4 = ";
    getline(cin, userid4);

    tail->user_name = usern4;
    tail->user_id = userid4;
    tail->next = NULL;
    //============================================//

    // print the linked list value.
    // First, set head to the first node(first).
    head = first;
    while(head != NULL){
        cout << "Username = " << head->user_name << "\n";
        cout << "User-ID = " << head->user_id << "\n";
        cout << "====================================" << "\n";
        head = head->next;
    }

}
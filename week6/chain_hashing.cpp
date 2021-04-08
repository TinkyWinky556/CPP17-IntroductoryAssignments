#include <bits/stdc++.h>
using namespace std;

class HashTable{
    public:
        // For Each Bucket(idx) Points To List.
        int bucket;

        // Pointer To The Array Containing Buckets Linked To Lists.
        list<int> *table;

        HashTable(int bucket_nums);
        int hashFunction(int key);
        void insertKey(int key);
        void deleteKey(int key);
        void displayHashTable();
};

HashTable::HashTable(int bucket_nums){
    // Initialize Number Of Buckets And Size Of Pointed Lists.
    this->bucket = bucket_nums;
    table = new list<int>[bucket];
}

int HashTable::hashFunction(int key){
    // Standard Modulo Based Hashing Function.
    return (key % bucket); 
}

void HashTable::insertKey(int key){
    /*
        Hash The Key And Insert It To Reached Hash Index.
    */
    int index = hashFunction(key);
    table[index].push_back(key);
}

void HashTable::deleteKey(int key){
    int index = hashFunction(key);

    // Traverse The List To Find The Key.
    list<int>::iterator i;
    for(i = table[index].begin(); i != table[index].end(); i++){
        // The Key Pointed To By Iterator Is Found.
        if(*i == key)
            break;
    }

    // The Key Is Deleted.
    if(i != table[index].end())
        table[index].erase(i);
}

void HashTable::displayHashTable(){
    // Print Bucket Indexes.
    for(int i = 0; i < bucket; i++){
        cout << i;
        // Print Keys.
        for(auto x : table[i])
            cout << "-->" << x;
        cout << endl;
    }
}

int main(){
    HashTable myHashTable(50);
    int choice;

    do{
        cout << "MENU" << endl;
        cout << "SIZE OF TABLE = 50 !" << endl;
        cout << "1. INSERT KEY" << endl;
        cout << "2. DELETE KEY" << endl;
        cout << "3. DISPLAY" << endl;
        cout << "4. EXIT" << endl;
        cout << "Enter Your Choice = ";
        cin >> choice;

        switch(choice){
            case 1:
                int key;

                cout << "Enter Key = ";
                cin >> key;

                myHashTable.insertKey(key);
                cout << "\nKey Has Been Inserted.";

                break;

            case 2:
                int key2;

                cout << "Enter Key To Be Deleted = ";
                cin >> key2;

                myHashTable.deleteKey(key2);
                
                break;

            case 3:
                myHashTable.displayHashTable();
                break;
            
            case 4:
                exit(0);
                break;
        }

    }while(choice != 4);

    return 0;
}
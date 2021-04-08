#include <bits/stdc++.h>
using namespace std;

template <typename K, typename V>

class HashNode{
    public:
        K key;
        V value;

        HashNode(K key, V value){
            this->key = key;
            this->value = value;
        }
};

template <typename K, typename V>

class HashMap{
        // Array Of Hash Nodes.
        HashNode<K, V> **array;

        int capacity;
        int size;

        // Null Node To Replace Deleted Nodes.
        HashNode<K, V> *null_node;

    public:
        HashMap(){
            capacity = 20;

            // Size Increments Upon Insertion And Decrements Upon Deletion.
            size = 0;

            // Allocate Space For Table.
            array = new HashNode<K, V>*[capacity];

            // Initialize Every Element In Table To NULL.
            for(int i = 0; i < capacity; i++)
                array[i] = NULL;
            
            // Null Node Has -1 As Its Key And Value Pair.
            null_node = new HashNode<K, V>(-1, -1);
        }

        int hashFunction(int key){
            return key % capacity;
        }

        void insertNode(K key, V value){
            // Create New Node With New Pair.
            HashNode<K, V> *temp = new HashNode<K, V>(key, value);
            int index = hashFunction(key);

            while(array[index] != NULL && array[index]->key != key && array[index]->key != -1){
                // Probe Through Indexes Where They Are Occupied, Having The Same Key, Or Is Filled With A Null Node.
                // Probe And Re-hash Occupied Indexes.  
                index++;
                index %= capacity;
            }

            // Found Unoccupied Index.
            if(array[index] == NULL || array[index]->key == -1)
                // Increment Size If Insertion Is Successful.
                size++;
            
            // Insert The New Node There.
            array[index] = temp;
        }

        V deleteNode(int key){
            int index = hashFunction(key);

            // Traverse & Find The Node.
            while(array[index] != NULL){
                // Found Node.
                if(array[index]->key == key){
                    // Store Found Node In A New Temp Node. 
                    HashNode<K, V> *temp = array[index];
                    // Replace Found Node With Null Node(Key = -1, Value = -1)
                    array[index] = null_node;

                    // Decrement Size If Deletion Is Successful.
                    size--;
                    // Return The Value Of Deleted Node.
                    return temp->value;
                }
                index++;
                index %= capacity;
            }
            return NULL;
        }

        // Searches A Key And Its Value Will Be Returned.
        V searchNode(int key){
            int index = hashFunction(key);
            int incrementor = 0;

            while(array[index] != NULL){
                int incrementor = 0;
                // To Not Loop Beyond The Table.
                if(incrementor++ > capacity)
                    return NULL;
                
                // Found Node With Key, Return Its Value.
                if(array[index]->key == key)
                    return array[index]->value;

                index++;
                index %= capacity;
            }
            // Not Found.
            return NULL;
        }

        void displayTable(){
            for(int i = 0; i < capacity; i++){
                // The Arrow Operator Projects Through Two Nested Pointers To HashNode Class Containing Key And Value Information.
                // Print Only Elements Not NULL Or Not A Deleted Node.
                if(array[i] != NULL && array[i]->key != -1)
                    cout << "Key = " << array[i]->key << " -->" << " Value = " << array[i]->value << endl;
            }
        }
};

int main(){
    HashMap<int, int> *myHashTable = new HashMap<int, int>;
    int choice;

    do{
        cout << "MENU" << endl;
        cout << "1. INSERT KEY & VALUE" << endl;
        cout << "2. SEARCH KEY" << endl;
        cout << "3. DELETE KEY" << endl;
        cout << "4. DISPLAY" << endl;
        cout << "5. EXIT" << endl;
        cout << "Enter Your Choice = ";
        cin >> choice;

        switch(choice){
            case 1:
                int key, value;

                cout << "Enter Key = ";
                cin >> key;
                cout << "\nEnter Value = ";
                cin >> value;

                myHashTable->insertNode(key, value);
                cout << "\nPair Has Been Inserted.";

                break;

            case 2:
                int key2;

                cout << "Enter Key To Be Searched = ";
                cin >> key2;

                if(myHashTable->searchNode(key2) == NULL)
                    cout << "\nKey Not Found.";
                else
                    cout << myHashTable->searchNode(key2) << " Is Value At Key " << key2;
                
                break;

            case 3:
                int key3;

                cout << "Enter Key To Be Deleted = ";
                cin >> key3;

                if(myHashTable->deleteNode(key3) == NULL)
                    cout << "\nKey Not Found.";
                else
                    cout << myHashTable->deleteNode(key3) << " Value Deleted With Key " << key3;
                
                break;
            
            case 4:
                myHashTable->displayTable();
                break;
        }

    }while(choice != 5);

    return 0;
}
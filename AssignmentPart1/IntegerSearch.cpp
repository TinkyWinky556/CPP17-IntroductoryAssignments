#include <iostream>
#include <vector>
using namespace std;

int main(){

	// declare a valid vector data array.
	int ROW = 9;
	const vector<int>Data{3,49,1,6,33,13,9,4,6};
	int key;
    bool isfound;
	
	// prompt the search key.
	cout << "What data are you searching for?" << endl;
	cin >> key;

    // given a vector element as an input, return its corresponding index in the vector array.
    // if element is not found, counter boolean will be set to false and "data not found" is returned.
    for(int i = 0; i < Data.size(); i++){
        if(Data[i] == key){
            isfound = true;
            cout << "found in index" << " " << i << endl;
        }
        else if(isfound = false){
            cout << "Data Not Found.";
        }
    }

}

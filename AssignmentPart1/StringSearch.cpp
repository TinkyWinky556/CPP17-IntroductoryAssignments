#include <iostream>
#include <vector>
using namespace std;

int main(){
    string search;
    bool isfound;
    const vector<string>names{"Nicky","David","Guntur","Cindy","Rizqy","James"};

    cout << "What data are you searching for?" << endl;
	cin >> search;

    for(int name = 0; name < names.size(); name++){
        if(names[name] == search){
            cout << "found in index: " << "" << name;
            isfound = true;
        }

    }
    if(isfound = false){
        cout << "Data Not Found.";
    }

}
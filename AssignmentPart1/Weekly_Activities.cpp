#include <iostream>
#include <vector>
using namespace std;

int main(){
    string day_input;
    const vector<string>all_days{"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Input Validation Is Not Necessarily Required In This Task.
    cout << "What day is it today?" << endl;
    cin >> day_input;

    /*
        If Input Is Found In String Vector:
            If The Index Of Found Vector Element Is Less Than Indexes For Elements "Saturday" & "Sunday", Then Input Is A WeekDay:
                Else, Input Is A WeekEnd Day.
    */
    for(int i = 0; i < all_days.size(); i++){
        if(all_days[i] == day_input){
            if(i < 5){
                cout << "I Will Study." << endl;
            }
            else{
                cout << "I Will Take A Break And Go Catch Some Fish." << endl;
            }
        }
    }
}

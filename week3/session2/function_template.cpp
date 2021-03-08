#include <iostream>
#include <string>
using namespace std;

// template to overload function.
template <typename T>
T find_max(T x, T y){
    return (x > y) ? x : y;
}

int main() {

	cout << "The larger of " << "Larger" << " and " << "Smaller" << " is " << find_max<string>("Larger", "Smaller") << endl;

    cout << "The larger of " << "a" << " and " << "b" << " is " << find_max<char>('a', 'b') << endl;

    cout << "The larger of " << "1" << " and " << "0" << " is " << find_max<int>(1, 0) << endl;

    cout << "The larger of " << "3.14" << " and " << "6.28" << " is " << find_max<float>(6.28f, 3.14f) << endl;

    return 0;
}
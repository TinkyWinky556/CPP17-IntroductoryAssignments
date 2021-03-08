#include <iostream>
#include <string>
using namespace std;

template <class T>
class Larger {
	private:
		T first;
		T second;

	public:
		T getFirst();
		T getSecond();
		void setFirst(T f);
        void setSecond(T s);
        T isLarger();
};

// your code here
template <class T>
T Larger<T>::getFirst(){
    return first;
}

template <class T>
T Larger<T>::getSecond(){
    return second;
}

template <class T>
void Larger<T>::setFirst(T f){
    first = f;
}

template <class T>
void Larger<T>::setSecond(T s){
    second = s;
}

template <class T>
T Larger<T>::isLarger(){
    return (first > second) ? first : second;
}

int main() {
	
	Larger<int> l;
	int f, s;
	
	cout << "Enter first data " << endl;
	cin >> f;
	l.setFirst(f);
	
	cout << "Enter second data " << endl;
	cin >> s;
	l.setSecond(s);

		
	cout << "The larger of " << f << " and " << s << " is " << l.isLarger() << endl;

	return 0; 
}


#include <iostream>
using namespace std;

//Create a Shape class which has width and height data members.
class Shape{
    protected:
    int height;
    int width;

    public:
    void set_width(double w){
        width = w;
    }

    void set_height(double h){
        height = h;
    }

    double get_width(){
        return width;
    }

    double get_height(){
        return height;
    }

    // Create a member function to calculate area.
    double get_area(){
        return height * width;
    }

};

// Create a sub class Rectangle which inherits the Shape class.
class Triangle: public Shape{
    // Override the function to calculate area.
    public:
    double get_area(){
        return 0.5 * height * width;
    }
};

int main(){
    // In the main function. create objects of a derived class.
    Triangle MyObj;

    // Access its member data and invoke its methods.
    MyObj.set_height(32.4);
    // Width = Base.
    MyObj.set_width(29.5);

    // Access Overridden Method In Triangle Class.
    Triangle* ptr = &MyObj;
    cout << ptr->get_area();

    return 0;
}


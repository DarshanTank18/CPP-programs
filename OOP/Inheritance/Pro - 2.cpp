//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;

class A {
public:
	int length, width;
	
    void Dimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
};

class D : public A {
public:
    void calculateArea() {
        int area = length * width;
        cout << "\nArea of Rectangle: " << area;
    }
};

int main() {
    D rectangle;
    rectangle.Dimensions();
    rectangle.calculateArea();
}


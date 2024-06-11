//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
float PI = 3.14;

class Circle{
    double radius;

    public:
        Circle(double r){
            radius=r;
        }

        double area(){
            return PI*radius*radius;
        }

        double circumference(){
            return 2*PI*radius;
        }
};

int main()
{
    double radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;

    Circle circle(radius);

    cout<<"Area of  circle: "<<circle.area();
    cout<<"\nCircumference of the circle: "<<circle.circumference();
}


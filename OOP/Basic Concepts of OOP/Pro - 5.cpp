//Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter
#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;

    public:
        Rectangle(double le,double wi){
            length = le;
            width = wi;
        }

        double area(){
            return length * width;
        }

        double Perimeter(){
            return 2 * (length + width);
        }
};

main()
{
    double width,length;
    cout<<"Enter length of Rectangle: ";
    cin>>length;
    
    cout<<"Enter width of Rectangle: ";
    cin>>width;

    Rectangle rectangle(length,width);

    cout<<"Area of  circle: "<<rectangle.area();
    cout<<"\nPerimeter of the circle: "<<rectangle.Perimeter();
}


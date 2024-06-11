//Write a programto swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;

class abc{
	public:
    int a,b;
    void xyz(){
        cout<<"Enter first no. : ";
        cin>>a;

        cout<<"Enter second no. : ";
        cin>>b;
    }

    void ijk(){
        cout<<"Before swap a = "<<a<<" b = "<<b;
        swap(a,b);
        cout<<"\nAfter swap a = "<<a<<" b = "<<b;
    }
};

main(){
    abc ab;
    ab.xyz();
    ab.ijk();
}


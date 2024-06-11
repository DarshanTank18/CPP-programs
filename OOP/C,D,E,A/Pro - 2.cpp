//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class sum{
	public:
		sum(int a, int b){
			cout<<"\nsum of a and b : "<<a+b;
		}
};

class sub{
	public:
		sub(int a, int b){
			cout<<"\nsub of a and b : "<<a-b;
		}
};

class mul{
	public:
		mul(int a, int b){
			cout<<"\nmul of a and b : "<<a*b;
		}
};

class div{
	public:
		div(float a, float b){
			cout<<"\ndiv of a and b : "<<a/b;
		}
};
main(){
	int a,b;
	cout<<"Enter a : ";
	cin>>a;
	cout<<"Enter b : ";
	cin>>b;
	
	sum su(a,b);
	sub sb(a,b);
	mul mu(a,b);
	div di(a,b);
}

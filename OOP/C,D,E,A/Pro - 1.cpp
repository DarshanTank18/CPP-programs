//Write a programto find the multiplication values and the cubic values using inline function
#include<iostream>
using namespace std;
class calc{
	public:
	int a,b;
	
	void mul();
	void cubic();
};
void calc :: mul(){
	cout<<"Enter value of A:";
	cin>>a;
	cout<<"Enter value of B:";
	cin>>b;
	cout<<"\nMultiplication is:"<<a*b;
}
void calc :: cubic(){
	cout<<"\nCubic of a is:"<<a*a*a;
	cout<<"\nCubic of b is:"<<b*b*b;
}
main(){
	calc c;
	c.mul();
	c.cubic();
}

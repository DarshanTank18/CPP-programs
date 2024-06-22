//Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class Triangle{
	
	double sid1, sid2, sid3;
	public:
		Triangle(double a, double b, double c){
			sid1 = a;
			sid2 = b;
			sid3 = c;
		}
		
		void side(){
			if(sid1 == sid2 && sid2 == sid3){
				cout<<"Traingle is equilateral";
			}else if(sid1 == sid2 || sid2 == sid3 || sid1 == sid3){
				cout<<"Traingle is isosceless";
			}else{
				cout<<"Traingle is scalene";
			}
		}
};
main(){
	double e,f,g;
	cout<<"Enter side one : ";
	cin>>e;
	
	cout<<"Enter side two : ";
	cin>>f;
	
	cout<<"Enter side three : ";
	cin>>g;
	
	Triangle traian(e,f,g);
	traian.side();
}

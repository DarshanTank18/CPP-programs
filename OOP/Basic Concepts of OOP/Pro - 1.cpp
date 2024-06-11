// WAP to create simple calculator using class.
#include<iostream>
using namespace std;
class getdata{
	public :
		float a,b;
		void data(){
			cout<<"Enter a :";
			cin>>a;
			
			cout<<"Enter B :";
			cin>>b;
		}
			void sum(){
				cout<<"\nsum of a+b : "<<a+b;
			}
			void sub(){
				cout<<"\nsub of a-b : "<<a-b;
			}
			void mul(){
				cout<<"\nmul of a*b : "<<a*b;
			}
			void div(){
				cout<<"\ndiv of a/b : "<<a/b;
			}
};

main(){
	getdata da;
	
	da.data();
	da.sum();
	da.sub();
	da.mul();
	da.div();
}

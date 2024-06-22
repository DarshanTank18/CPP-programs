//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

class Test{
   int x,y;
	public:

   void input() {
       cout<<"Enter number : ";
       cin>>x;
       cout<<"Enter number : ";
       cin>>y;
	}
   friend void find(Test t);
};

void find(Test t){
   if(t.x > t.y){
       cout<<"Largest is : "<<t.x;
   }else{
       cout<<"Largest is : "<<t.y;
   }
}

main(){
   Test t;
   t.input();
   find(t);
}


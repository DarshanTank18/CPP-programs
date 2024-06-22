// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include<iostream> 
using namespace std; 
class Virat{ 
	public: 
		Virat(){ 
			cout<<"King kohli\n"; 
		} 
}; 
class Ronaldo: public Virat
{ 
	public: 
		Ronaldo(){ 
			cout<<"Ronaldo the Greatest Of All Time\n"; 
		} 
}; 
class Sunil: public Ronaldo 
{ 
	public: 
		Sunil() 
		{ 
			cout<<"Sunil is also the Greatest Of All Time \n"; 
			
		} 
};
int main() 
{ 
	Sunil sunil;
}


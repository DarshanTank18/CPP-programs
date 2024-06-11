//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;

class Stdinfo{
    string name,country;
    int age;

    public:
        Stdinfo(string nm, int ag, string co){
            name = nm;
            age = ag;
            country = co;
        }
        
		void printdata(){
			cout<<"\nEnter name : "<<name;
        	cout<<"\nEnter age : "<<age;
        	cout<<"\nEnter country : "<<country;
		}
};

int main()
{
	int a;
	string n,c;
	
	cout<<"Enter name : ";
    cin>>n;
		
    cout<<"Enter age : ";
    cin>>a;
    
    cout<<"Enter country : ";
    cin>>c;
    
    Stdinfo st(n, a, c);
    st.printdata();
}


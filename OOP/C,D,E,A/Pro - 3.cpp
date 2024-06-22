//Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.
#include<iostream>
using namespace std;

class Car{
    string company, model;
    int year;

    public:
        Car(string com, int ye, string mod){
            company = com;
            model = mod;
            year = ye;
        }
        
		void printdata(){
			cout<<"\nCompany : "<<company;
        	cout<<"\nModel : "<<model;
        	cout<<"\nYear : "<<year;
		}
};

int main()
{
    string n, m;
    int y;

    cout<<"Enter company : ";
    cin>>n;

    cout<<"Enter model : ";
    cin>>m;

    cout<<"Enter year : ";
    cin>>y;

    Car c(n, y, m);
    c.printdata();
}


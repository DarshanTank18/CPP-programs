// Pro - 4
#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream fl("Pro - 4.txt",ios::app);
	
	string nm;
	int id;
	
	cout<<"Enter Id : ";
	cin>>id;
	cout<<"Enter name : ";
	cin>>nm;
	
	cout<<"\nId : "<<id;
	cout<<"\nName : "<<nm;
	
	fl<<"\nID : "<<id;
	fl<<"\nName : "<<nm;
	
	fl.close();
}

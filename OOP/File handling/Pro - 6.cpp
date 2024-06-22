// Pro - 6
#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream fl("Pro - 6.txt",ios::app);
	
	string nm;
	int i,n,m1,m2,m3,total;
	float pr;
	
	cout<<"Enter numbers of student : ";
	cin>>n;
	
	for(i=0;i<n;i++){
	cout<<"Enter name : ";
	cin>>nm;
	
	cout<<"Enter first subject mark: ";
	cin>>m1;
	
	cout<<"Enter second subject mark: ";
	cin>>m2;
	
	cout<<"Enter third subject mark: ";
	cin>>m3;
	
	cout<<"---------------------\n";
	cout<<" Name : "<<nm;
	cout<<"\n Mark 1 : "<<m1;
	cout<<"\n Mark 2 : "<<m2;
	cout<<"\n Mark 3 : "<<m3;
	total = m1 + m2 + m3;
	cout<<"\n Total : "<<total;
	pr = total / 3;
	cout<<"\n Pr. :"<<pr;
	if(pr > 33){
		cout<<"\n Pass..";
	}else{
		cout<<"\n Fail..";
	}
	cout<<"\n---------------------\n";
	
	fl<<"\n---------------------\n";
	fl<<" Name : "<<nm;
	fl<<"\n Mark 1 : "<<m1;
	fl<<"\n Mark 2 : "<<m2;
	fl<<"\n Mark 2 : "<<m2;
	fl<<"\n Total : "<<total;
	fl<<"\n Pr. : "<<pr;
	if(pr >= 33){
		fl<<"\n Pass..";
	}else{
		fl<<"\n Fail..";
	}
	}
}

// Pro - 2
#include <iostream>
#include <fstream>
using namespace std;
main() {
    ofstream fl("Pro - 2.txt",ios::app);
    
    string fnm,lnm,city;
    int i,n;
    
    cout<<"Enter total student(s): ";
    cin>>n;
    
    for(i=0;i<n;i++){
        cout<<"Enter first name: ";
        cin>>fnm;
        cout<<"Enter last name: ";
        cin>>lnm;
        cout<<"Enter your city: ";
        cin>>city;
        
        cout<<"---------------------\n";
        cout<<"First name: "<<fnm;
        cout<<"\nLast name: "<<lnm;
        cout<<"\nCity: "<<city;
        cout<<"\n---------------------\n";
        
        fl<<"First name: "<<fnm;
        fl<<"\nLast name: "<<lnm;
        fl<<"\nCity: "<<city;
        fl<<"\n---------------------\n";
    }
    fl.close();
}


//Pro - 3
#include<iostream>
#include<fstream>
using namespace std;

main(){
    ofstream fl("Pro - 3.txt",ios::app);
    
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    if(n % 2 == 0) {
        cout<<"\nEven value";
        fl<<"\nValue is: "<<n;
        fl<<"\nEven value";
    }else{
        cout<<"\nOdd value";
        fl<<"\nValue is: "<<n;
        fl<<"\nOdd value";
    }
    fl.close();
}


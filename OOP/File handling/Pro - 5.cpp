// Pro - 5
#include<iostream>
#include<fstream>
using namespace std;
main(){
    ifstream f1("Pro - 5-1.txt",ios::app);
	ifstream f2("Pro - 5-2.txt",ios::app);
	
	int d1,d2;
	
	if(f1 == NULL || f2 == NULL){
	    cout<<"Cannot read file..";
	}else{
		d1 = f1.get();
        d2 = f2.get();
		while (d1!=EOF && d2!=EOF){
			d1 = f1.get();
		    d2 = f2.get();
		}
	}
	if(d1==d2){
		cout<<"Files are equal!..";
	}else if(d1!=d2){
		cout<<"\nFiles are not equal!..";
	}else{
		cout<<"\nSome crap occured!";
	}
	f1.close();
	f2.close();
}

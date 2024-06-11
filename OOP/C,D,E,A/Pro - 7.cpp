//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;

class Date{
	int day,month,year;
	
	public:
		Date (int d,int m,int y){
    		day = d;
    		month = m;
    		year = y;
		}
		
		int getDay() const {
      	return day;
    	}

    	int getMonth(){
    	return month;
    	}

    	int getYear(){
		return year;
    }
    
    bool isValidDate(){
	if (month < 1 || month > 12)
    return false;

    if (day < 1 || day > 31)
    return false;
    
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	return false;

    if (month == 2){
        if (year%4==0) {
          	if (day > 29)
            return false;
        }else{
			if (day > 28)
        	return false;
        	}
    	}return true;
	}
};

main(){
	int da, mo, ye;
	
	cout<<"Input day: ";
	cin>>da;
	
	cout<<"Input month: ";
	cin>>mo;
	
	cout<<"Input year: ";
	cin>>ye;
	
	Date dt(da,mo,ye);
	cout << "Date: " << dt.getDay() << " / " << dt.getMonth() << " / " << dt.getYear() << endl;
	
	if (dt.isValidDate()){
		cout<<"\nThe date is valid.";
	}else{
		cout<<"\nThe date is invalid.";
	}
}


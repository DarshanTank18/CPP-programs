/*Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor */

#include<iostream>
using namespace std;
class Employee{
	string name;
    int employeeId;
    double salary;
    
    public :
    	Employee (string empnm, int empid, double empsal){
    		name = empnm;
    		employeeId = empid;
    		salary = empsal;
		}
		
		void calsal(double perfomance){
			if(perfomance >= 0 && perfomance <= 1.5){
				salary *= perfomance;
			}else{
				cout<<"Invalid performance rating. -_- ";
			}
		}
		
		void setSalary(double empSalary) {
      		salary = empSalary;
    	}
    	
    	string getname(){
    		return name;
		}
		
		int getEmployeeId(){
      		return employeeId;
    	}
    	
    	double getSalary(){
      		return salary;
    	}
};

main(){
	string empName;
  	int empId;
  	double empSalary,pr;

  	cout<<"Input employee name: ";
  	cin>>empName;

  	cout<<"Input employee ID: ";
  	cin>>empId;

  	cout<<"Input employee salary: ";
  	cin>>empSalary;
  
  	Employee employee(empName, empId, empSalary);
  	
  	cout<<"Initial salary : "<<employee.getSalary();
  	
  	cout<<"\nInput performance rating (0.0 - 1.5): ";
  	cin>>pr;
  	
  	employee.calsal(pr);
  	
  	cout<<"Updated salary: " <<employee.getSalary();
}

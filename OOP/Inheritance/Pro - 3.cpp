/*Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		void person(){
			cout<<"Enter name : ";
			cin>>name;
			
			cout<<"Enter age : ";
			cin>>age;
		}
		
		void persondata(){
			cout<<"\n Person name is : "<<name;
			cout<<"\n Person age is : "<<age;
		}
};

class Student{
	public:
	int m1,m2,m3,mark;
	float pr;
	void student(){
			cout<<"Enter mark 1 : ";
			cin>>m1;
			
			cout<<"Enter mark 2 : ";
			cin>>m2;
			
			cout<<"Enter mark 3 : ";
			cin>>m3;
			
			pr = (m1 + m2 + m3) / 3;
		}
	void studentData() {
		
        cout<<"\n Percentage : "<<pr<<"%"<<endl;
    }
};

class teacher{
	public:
	int sal;
	void salary(){
		cout<<"Enter teacher's salary : ";
		cin>>sal;
	}
	void tsalary(){
		cout<<" salary : "<<sal<<"rs.";
	}
};

class printdata: public Person,public Student, public teacher{
	public:
	void getdata(){
		person();
		student();
		salary();
	}
	void print(){
		persondata();
		studentData();
		tsalary();
	}
};

main(){
	printdata pdata;
	
	pdata.getdata();
	pdata.print();
}

//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)
#include<iostream>
using namespace std;
class Students{
	public:
		int rlno;
		string name;
		void student(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter roll number : ";
			cin>>rlno;
		}
};

class Test:public Students{
	public:
		int m1,m2;
		void test(){
			cout<<"Enter mark one : ";
			cin>>m1;
			
			cout<<"Enter mark two : ";
			cin>>m2;
		}
};

class Total:public Test{
	public:
		int mark;
		void total(){
			mark = m1 + m2;
		}
		void printfata(){
			cout<<"\n\nname : "<<name;
			cout<<"\nRollno. : "<<rlno;
			cout<<"\nmerks : "<<m1<<","<<m2;
			cout<<"\nTotal : "<<mark;
		}
};

main(){
	Total tal;
	
	tal.student();
	tal.test();
	tal.total();
	tal.printfata();
}

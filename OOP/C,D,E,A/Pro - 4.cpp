//Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class bank {
	int accno;
	double bal;
	
	public:
		bank(int a,double b){
			accno = a;
			bal = b;
		}
		
		void deposit(double amount){
			if (amount > 0){
				bal += amount;
				cout<<"deposite : \n"<<amount;
			}else{
				cout<<"invalid amount ";
			}
		}
		
		void withdraw(double amount){
			if(amount > 0 && amount <= bal){
				bal -= amount;
				cout<<"withdraw : \n"<< amount;
			}else if(amount < bal){
				cout<<"Insufficient balance...";
			}else{
				cout<<"invalid amount ";
			}
		}
		
		int getAccno(){
			return accno;
		}
		
		double getBal(){
			return bal;
		}
		
		void printData(){
			cout<<"\nacc no. : "<<accno;
			cout<<"\ncurrent bal. : \n"<<bal;
		}
};
main(){
	int accno,choice;
	double initbal,amount;
	
	cout<<"Enter acc. no : ";
	cin>>accno;
	
	cout<<"Enter initial bal. : ";
	cin>>initbal;
	
	bank bnk(accno,initbal);
	do{
		cout<<"\n1. deposite \n2. withdraw \n3. print acc details \n4. exit \n";
		cout<<"Enter choice : ";
		cin>>choice;
		
		switch(choice){
			case 1:
				cout<<"\nEnter deposite amount : ";
				cin>>amount;
				bnk.deposit(amount);
				break;
			
			case 2:
				cout<<"\nEnter withdraw amount : ";
				cin>>amount;
				bnk.withdraw(amount);
				break;
				
			case 3:
				bnk.printData();
				break;
				
			case 4:
				cout<<"Exit";
				break;
				
			default:
				cout<<"invalid choice......";
		}
	}while (choice != 4);
}

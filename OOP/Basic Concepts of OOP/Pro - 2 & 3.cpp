#include<iostream>
using namespace std;
class opening{
	public:
		int acc_no;
		string type,name;
		
		void accdata(){
			cout<<"Enter name : ";
			cin>>name; 
			
			cout<<"Enter account no. : ";
			cin>>acc_no;
			
			cout<<"Enter account type : ";
			cin>>type;
		}
};

class deposite
{
	public:
		int damount;
		
		void ddata(){
			cout<<"Enter amount : ";
			cin>>damount;
			if(damount >= 2000){
				cout<<"Sucessfully";
			}else{
				cout<<"Error";
				cout<<"\nEnter re-amount : ";
				cin>>damount;
			}
		}
		
};

class withdrwal:public deposite
{
	public:
		int wamount,total;
		
		void wdata(){
			cout<<"\nEnter withdrwal amount : ";
			cin>>wamount;
			
			if(damount >= wamount){
				cout<<"\nwithdrwal sucessfully";
				total = damount - wamount;
				cout<<"\nTotal : "<<total;
			}else{
				cout<<"\ncheck yoour balance";
				cout<<"\nEnter re-amount : ";
				cin>>wamount;
				total = damount - wamount;
				cout<<"\nTotal : "<<total;
			}
		}
};

class statement:public opening,public withdrwal
{
	public:
		void sdata(){
			cout<<"\nacc number :"<<acc_no;
			cout<<"\nacc type :"<<type;
			cout<<"\nacc holder name :"<<name;
			cout<<"\nTotal : "<<total;
		}
};
main(){
	statement st;
	st.accdata();
	st.ddata();
	st.wdata();
	st.sdata();
	
}

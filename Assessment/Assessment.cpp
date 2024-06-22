// Assessment
#include<iostream>
#include<cmath>
using namespace std;
class Management{
	public :
	int nguest, emin, choice, CostForOneServer;
    string event, fnm, lnm;
    double servers, totalCost, TotalCost, AverageCost, TotalFoodCost, DepositAmount;
		void detail(){
			cout<<"***********Event Management System***********";
			cout<<"\nEnter the name of the event : ";
			cin>>event;
			
			cout<<"Enter the customer's first and last name : ";
			cin>>fnm>>lnm;
			
			cout<<"Enter the number of guests : ";
			cin>>nguest;
			
			cout<<"Enter the number of minutes in the event : ";
			cin>>emin;
		}
		
		void Servers(){
		servers = nguest / 20;

		double Cost1 = (emin / 60 ) * 18.50;
		double Cost2 = (emin % 60 ) * 0.40;
		CostForOneServer = Cost1 + Cost2;

        TotalFoodCost = nguest * 20.70;
        AverageCost = TotalFoodCost / nguest;
        TotalCost = TotalFoodCost + (CostForOneServer * servers);
		DepositAmount = TotalCost * 0.25;
		}
		
		void printdata(){
			cout<<"\n\n Event name is "<<event<<".";
			cout<<"\n Customer name is "<<fnm<<" "<<lnm<<".";
			cout<<"\n Number of guests is "<<nguest<<".";
			cout<<"\n number of minutes is "<<emin<<".\n";
			cout<<"\n==========Event estimate for :"<<fnm<<lnm<<"==========";
			cout<<"\n Number of Server : "<<servers;
			cout<<"\n The cost for servers : "<<CostForOneServer;
			cout<<"\n Total cost of food is : "<<20.70 * nguest;
			cout<<"\n Average cost per person : "<<20.70;
			cout<<"\n\n Total cost is : "<<TotalCost;
			cout<<"\n Please deposite a 25% deposite to reserve the event";
			cout<<"\n The deposite needed is : "<<DepositAmount;
		}
			
};
main(){
	Management ment;
	ment.detail();
	ment.Servers();
	ment.printdata();
}

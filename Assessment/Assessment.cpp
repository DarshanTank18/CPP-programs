// Assessment
#include<iostream>
#include<cmath> // For ceil function
using namespace std;
class Management{
	public :
	int nguest, emin, choice, CostForOneServer;
    string event, fnm, lnm;
    double servers, totalCost, TotalCost, AverageCost, TotalFoodCost, DepositAmount;
    const double CostPerHour = 18.50, CostPerMinute = 0.40, CostOfDinner = 20.70;
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
		servers = ceil(static_cast<int>(nguest) / 20); // rounding up to the nearest integer

		double Cost1 = (emin / 60 ) * CostPerHour;
		double Cost2 = (emin % 60 ) * CostPerMinute;
		CostForOneServer = Cost1 + Cost2; //GET COST of ONE Server.

        TotalFoodCost = nguest * CostOfDinner; // GET COST for FOOD.
        AverageCost = TotalFoodCost / nguest; // Get Average Cost Per Person
        TotalCost = TotalFoodCost + (CostForOneServer * servers);  // GET TOTAL COST.
        DepositAmount = TotalCost * 0.25;  // GET DEPOSIT AMOUNT
		}
		
		void printdata(){
			cout<<"\n\n Event name is "<<event<<".";
			cout<<"\n Customer name is "<<fnm<<" "<<lnm<<".";
			cout<<"\n Number of guests is "<<nguest<<".";
			cout<<"\n number of minutes is "<<emin<<".\n";
			cout<<"\n==========Event estimate for :"<<fnm<<lnm<<"==========";
			cout<<"\n Number of Server : "<<servers;
			cout<<"\n The cost for servers : "<<CostForOneServer;
			cout<<"\n Total cost of food is : "<<CostOfDinner * nguest;
			cout<<"\n Average cost per person : "<<CostOfDinner;
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

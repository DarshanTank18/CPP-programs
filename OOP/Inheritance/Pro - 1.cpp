#include <iostream>
using namespace std;

class Cricketer{
public:
	string name;
    int totalRuns;
    int bestPerformance;
    int innings;
    double averageRuns;
    
    void inputData() {
        cout<<"Enter batsman name: ";
        cin>>name;
        
        cout<<"Enter total innings: ";
        cin>>innings;
        
        cout<<"Enter total runs: ";
        cin>>totalRuns;
        
        cout<<"Enter batsman best performance: ";
        cin>>bestPerformance;

        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        if(innings != 0) {
            averageRuns = static_cast<double>(totalRuns) / innings;
        } else {
            averageRuns = 0;
        }
    }

    string getName(){
        return name;
    }

    int getTotalRuns(){
        return totalRuns;
    }

    int getBestPerformance(){
        return bestPerformance;
    }

    int getInnings(){
        return innings;
    }

    double getAverageRuns(){
        return averageRuns;
    }
};

class PrintData : public Cricketer{
public:
    void displayData() {
        cout<<"\nBatsman name: "<<getName();
        cout<<"\nBatsman total innings: "<<getInnings();
        cout<<"\nBatsman total runs: "<<getTotalRuns();
        cout<<"\nBatsman best performance: "<<getBestPerformance();
        cout<<"\nBatsman average runs: "<<getAverageRuns();
    }
};

int main(){
    PrintData pdata;
    pdata.inputData();
    pdata.displayData();
}


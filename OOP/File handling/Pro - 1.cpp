// Pro - 1
#include <iostream>
#include <fstream>
using namespace std;

main() {
    ofstream fl("Pro - 1.txt",ios::app);

    string fnm, lnm;
    cout << "Enter first name: ";
    cin >> fnm;
    cout << "Enter last name: ";
    cin >> lnm;

    fl<<"First name: " << fnm;
    fl<<"\nLast name: " << lnm;

    fl.close();
}


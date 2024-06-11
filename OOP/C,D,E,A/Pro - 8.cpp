#include <iostream>
using namespace std;

class Address {
public:
    string city, state, country;

    Address(string c, string s, string ctr) : city(c), state(s), country(ctr) {}
};

class Student {
    string name, sClass;
    int rno;
    double mark;

public:
    double stotal, spr;
    Address* address;

    Student(string stdname, string stdcls, int rollno, double stdmark, Address* addr)
        : name(stdname), sClass(stdcls), rno(rollno), mark(stdmark), address(addr) {
        stotal = stdmark;
        spr = stdmark / 3;
    }

    string Grade(){
        if(spr >= 90){
            return "A+";
        }else if(spr >= 80){
            return "A";
        } else if(spr >= 70){
            return "B";
        } else if(spr >= 60){
            return "C";
        } else if(spr >= 50){
            return "D";
        } else{
            return "F";
        }
    }

    void info(){
        cout<<"\n\nName: " << name;
        cout<<"\nClass: " << sClass;
        cout<<"\nRoll Number: " << rno;
        cout<<"\nMarks: " << mark;
        cout<<"\nTotal: " << stotal;
        cout<<"\nGrade: " << Grade();
        cout<<"\nPercentage: " << spr;
        cout<<"\nAddress: " << address->city << ", " << address->state << ", " << address->country << endl;
    }
};

main(){
    string studentname, studentClass, city, state, country;
    int rollNumber;
    double m1, m2, m3, total;

    cout<<"Enter student details:";

    cout<<"\nName: ";
    cin>>studentname;

    cout<<"Class: ";
    cin>>studentClass;

    cout<<"Roll Number: ";
    cin>>rollNumber;

    cout<<"Mark 1: ";
    cin>>m1;

    cout<<"Mark 2: ";
    cin>>m2;

    cout<<"Mark 3: ";
    cin>>m3;

    total = m1 + m2 + m3;

    cout<<"\nEnter Address Details:";
    cout<<"\nCity: ";
    cin>>city;
    cout<<"\nState: ";
    cin>>state;
    cout<<"\nCountry: ";
    cin>>country;

    Address addr(city, state, country);
    Student student(studentname, studentClass, rollNumber, total, &addr);

    student.info();
}


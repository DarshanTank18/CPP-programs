//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
using namespace std;
class student
{
    public:
    char a[30];
    int roll;
    void get()
    {
        cout<<"Enter the name : ";
        cin>>a;
        cout<<"Enter the roll.no : ";
        cin>>roll;
    }
};
class mark
{
    public:
    int m1,m2,m3,i;
    void in()
    {
        cout<<"Enter the marks : ";
        cin>>m1;
        cout<<"Enter the marks : ";
        cin>>m2;
        cout<<"Enter the marks : ";
        cin>>m3;
    }
};
class sheet:public student,public mark
{
    public:
    int t;
    float pEr;
    void dis()
    {
        cout<<"\n Name : "<<a;
        cout<<"\n Roll.no : "<<roll;
        t = m1 + m2 + m3;
        cout<<"\n Total marks : "<<t;
        pEr = (m1 + m2 + m3) / 3;
        cout<<"\n percentage :"<<pEr<<"%";
        
        if(pEr>=90){
        	cout<<"\n Grade is A";
		}else if(pEr>=70){
			cout<<"\n Grade is B";
		}else if(pEr>=50){
			cout<<"\n Grade is C";
		}else if(pEr>=40){
			cout<<"\n Grade is D";
		}else{
			cout<<"\n FAIL :(";
		}
    }
};
int main()
{
    sheet st;
    st.get();
    st.in();
    st.dis();
}

//Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>
using namespace std;
class suiiii{
  private:
    int pvt = 1;

  protected:
    int prot = 2;

   public:
    int pub = 3;

    int getPVT(){
      return pvt;
    }
};

class Goat : protected suiiii{
	public:
    int getProt(){
      return prot;
    }

    int getPub(){
      return pub;
    }
};

int main() {
  Goat goat;
  cout<<" Private cannot be accessed.";
  cout<<"\n Protected : "<<goat.getProt();
  cout<<"\n Public : "<<goat.getPub();
}

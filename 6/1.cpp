#include<iostream>

using namespace std;


class bank{
private:
  int balance;
  int deposit;
  int withdrawl;
  
public:
  bank()
{
  deposit=0;
  withdrawl=0;
}
  void readdata();
  void newdeposit();
  void newwith();
  void calculate();
  void print();

};

int main()
{

int n,flag=0;

bank axis;

cout <<"**************Welcome to Axis Bank-Automatic Banking Machine**********************\n\n";

axis.readdata();

while(flag!=1)
{
  
  cout << "Enter the type of transaction required (1 for deposit, 2 for withdrawl, 3 for balance enquiry ,0 to exit)";
  cin >> n;

  switch(n)
  {
  case 1: axis.newdeposit();
	  break;

  case 2: 
          axis.newwith();
          break;

  case 3: axis.print();
          break;
   
  case 0: flag=1;break;
  default:cout << "Enter a valid number";
  }
axis.calculate();
}
cout << "Happy Banking with us\n";
return 0;
}



void bank::readdata()
{
cout << "Enter initial balance:\n";
cin >> balance;
}


void bank::newdeposit()
{
cout << "Enter amount to be deposited:\n";
cin >> deposit;
}

void bank::newwith()
{
cout << "Enter amount to be withdrawn:\n";
cin >> withdrawl;
if(withdrawl > balance)
{ cout << "No sufficient funds in your account" << endl;
  withdrawl=0;
}
else
{
withdrawl=(-withdrawl);
}

}
void bank::calculate()
{
balance=balance+deposit+withdrawl;
deposit=0;
withdrawl=0;
}
void bank::print()
{
cout << "Balance in your account is " << balance << endl;
}


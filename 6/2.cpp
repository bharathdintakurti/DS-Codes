#include<iostream>

using namespace std;

class shop
{
 private:
   int itemcode[50];
   int pricelist[50];
   int bill;
   int n;
 public:
   shop()
  {
    bill=0;
  }
   void readdata();
   void newitem();
   void printbill();

};


void shop::readdata()
{

cout << "Enter total number of items in the database";
cin >> n;

for(int i=0;i<n;i++)
{ 
cout << "Enter Item code:\n";
cin >> itemcode[i];
cout << "Enter price:\n";
cin >> pricelist[i];
}


}


void shop::newitem()
{
int code,p;

cout << "Enter an item code:\n";
cin >> code;

cout << "Enter number of pieces:\n";
cin >> p;

int i=0;
if(itemcode[i]!=code)
{
i++;
}
bill=bill+p*pricelist[i];

}

void shop::printbill()
{
cout << "Total bill is "<< bill << endl;
}


int main()
{

cout << "***********Welcome to Reliance Fresh************************" << endl;

shop reli;

reli.readdata();
int flag=1;

while(flag!=0)
{
int opt;
cout << "Enter a option( 1 for new item,2 to print bill and terminate):";
cin >> opt;

switch(opt)
{
case 1:reli.newitem();break;
case 2:
       reli.printbill();
       flag=0; 
       break;
default:cout << "Enter a valid input\n\n";
}
}
cout << "Thank you for shopping .Visit again.\n";

return 0;
}

#include<iostream>
#include<string>


using namespace std;
class employee{
  protected:
      int id;
      string name;
      int grossmon;
      int grossann;
      int basicpay;
      float hra;
      float da;
  public:
      employee()
       { id=0;
         basicpay=0;
	 hra=0;
	 da=0; }
      void getvalue()
       { cout <<"Enter employee ID (numbers only) :";
         cin >> id;
         cout << "Enter employee name : ";
         cin >> name;
         cout << "Enter basic pay(monthly) :";
         cin >> basicpay;
         cout << "Enter HRA(in %) :";
         cin >> hra;
         cout << "Enter DA(in %):";
         cin >> da;   
         cout << endl << endl;
      }
     void calcsalary()
      {  
         int extra;
         extra=basicpay*(hra+da)/100;
         grossmon=basicpay+extra;
         grossann=12*grossmon;
      }
     void display()
      {
         cout <<"Name of employee : " << name << endl;
         cout <<"Total Basic pay(per year) is " << 12*basicpay << endl;
         cout <<"Total Gross pay(per year) is " << grossann << endl;
      }
     int idcmp()
      {  return id; }
};



int main()
{

int n;
cout <<"Enter total number of employees: ";
cin >> n;

employee emp[n];

int iden;

for(int i=0;i<n;i++)
{ cout << "\n#Enter details of employee "<< (i+1) << "\n\n";
  emp[i].getvalue();
  emp[i].calcsalary();
}

while(1)
{cout << "Enter no. of the employee to be displayed (0 to exit):";
 cin >> iden;

if(iden==0)
  break;

int flag=1;

for(int h=0;h<n;h++)
{
if(iden == emp[h].idcmp() )
  {  emp[h].display();
     flag=0;
     break;
  }
}
if(flag==1)

{cout <<"Entered ID does not match with any of our employees"<< endl;}
}
return 0;
}

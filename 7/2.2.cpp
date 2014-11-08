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
      employee(int iden)
       { id=iden;
         basicpay=0;
	 hra=0;
	 da=0; }
      void getvalue()
       { 
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

int iden;
cout << "Enter ID of the enmployee :";
cin >> iden;




employee emp(iden);




  cout << "\nEnter details of employee \n\n";
  emp.getvalue();
  emp.calcsalary();
  emp.display();

return 0;
}

#include<iostream>

using namespace std;

class account {
	protected:
	     string name;
	     long int acno;
             float bala;
             int depo;
             int with;

        public:
	 
            void getvalue()
            {
             cout << "Enter account holder's name:";
             cin >> name;
             cout << "Enter account number :";
             cin >> acno;
             cout << "Enter initial balance :";
             cin >> bala;
            }
            void newentry()
            {

              int tr;
	      cout << "Enter the type of transaction( 1 for deposit, 2 for withdrawl ) :";
              cin >> tr;

              switch(tr)
                 {
              case 1:
                     cout << "Enter the amount to be deposited :";
                     cin >> depo;
                     with=0;
                     break;
              case 2:
	             cout << "Enter the amount to be withdrawn :";
                     cin >> with;
                     depo=0;
                     break;

              default:cout << "Invalid choice.Try again" << endl;
                 }
            }
            void deposit()
            { bala=bala+depo;}

            void withdrawl()
            { if(with > depo)
               {  cout << "In sufficient funds.Transaction not completed " << endl; }
              else
               {  bala = bala-with; }
            }
            void display()
            { cout << "Balance in your account ater the transation is " << bala << endl;}

             };




class saving : public account {
	 private:
	      float interest;
              int rate;

         public:
               void savinit()
               { cout << "Enter rate of interest :";
                 cin >> rate;
               }
               void calcinterest()
               {
                 interest = (bala*rate)/(365*100);
                 bala+=interest;

               }
             };
class current : public account{
       private:
             int penalty;
             int minbal;
       public:
             void currint()
             {
              cout << "Enter minimum balance required :";
              cin >> minbal;
              cout << "Enter penalty to be imposed if balance decreases below threshold:";
              cin >> penalty;
             }
             void pena()
             {
               if(bala < minbal)
                   { bala-=penalty; }
             }

                              };


int main()
{

int cho;

cout << "\n        Welcome to Axis Bank -- Self Banking Kiosk\n\n";
cout << "Select the type of account( 1 for savings, 2 for Current) :";
cin >> cho;

int flag=1,i=1;
saving ac1;
current ac2;


switch(cho)

{

case 1: 
       
        ac1.savinit();
	ac1.getvalue();
        while(flag)
	{ac1.newentry();
         ac1.deposit();
         ac1.withdrawl();
         ac1.calcinterest();
         ac1.display();

         cout << "Press 0 to exit , any other number for another transaction :";
         cin >> i;
         if(i==0)
            {flag=0;}

        }
        break;

case 2 :
        ac2.currint();
        ac2.getvalue();
        while(flag)
        {ac2.newentry();
         ac2.deposit();
         ac2.withdrawl();
         ac2.pena();
         ac2.display();
         
         cout << "Press 0 to exit , any other key for another transaction :";
         cin >> i; 
         if(i==0)
           { flag=0;}
         }
        break;


default:
        cout << "Invalid type of account\n";

}

return 0;

}


#include<iostream>
#include<string>

using namespace std;

class switems_list
{  public:
	int swcode[10];
        int swprice[10];
        int swn;
        int bill;
        int totalsw;
        int totalhw;
   public:
        switem_list()
           {
             for(int i=0;i<10;i++)
                   swprice[i]=0;
           }
        void swgetlist()
           {   cout << "Enter total number of items in software database :";
               cin >> swn;
               for(int i=0;i<swn;i++)
                {
                    cout << "Enter code of software item no "<< i+1 <<" :";
                    cin >> swcode[i];
                    cout << "Enter its cost :";
                    cin >> swprice[i];
                }
           }

};

class hwitems_list
{  public:
        int hwcode[10];
        int hwprice[10];
        int hwn;
   public:
        hwitem_list()
           {   for(int i=0;i<10;i++)
                   hwprice[i]=0;
           }
        void hwgetlist()
           {   cout << "Enter total number of items in hardware database :";
               cin >> n;
               for(int i=0;i<hwn;i++)
                {
                    cout << "Enter code of hardware item no "<< i+1 <<" :";
                    cin >> hwcode[i];
                    cout << "Enter its cost :";
                    cin >> hwprice[i];
                }
           }
};


class salestrack : public hw_list,public sw_list
{
	protected:
             int swsales[10];
	     int hwsales[10];
	public:
	     salestrack()
             {
                 for(int i=0;i<10;i++)
                    swsales[i]=0;
		    hwsales[i]=0;
             }
             void newitem()
             {
                 cout << "Choose a category ( 1 for H/W , 2 for S/W ):"
                 int cat;
	         cin >> cat;
                 switch(cat)
                {
                case 1:
			int it;
			cout << "Enter a item code :";
			cin >> it;
			for(i=0;i<swn;i++)
			{
			  if(switem[i]==it)
				cout << "Enter quantity :";
				cin >> swsales[i];
                        }
			break;
               case 2:
                        int it;
                        cout << "Enter a item code :";
                        cin >> it;
                        for(i=0;i<hwn;i++)
                        {
                          if(hwitem[i]==it)
                                cout << "Enter quantity :";
                                cin >> hwsales[i];
                        }
			break;
               default:
                       cout << "Invalid choice";

                   };



class calcbill : public hw_list,public sw_list,public salestrack
{

          public:
                  calcbill()
                {  totalsw = 0;
                   totalhw = 0;
                }



                void calc()
                {  int i,j;
         	   for(i=0;i<swn;i++)
                      bill = bill + (swsales[i] * swprice[i]));
                      totalsw = totalsw + swsales[i];

                   for(j=0;j<hwn;h++)
                      bill = bill + (hwsales[j] * hwprice[i]);
                      totalhw = totalhw + hwsales[i];
                }
                void display()
                {
                  cout << "/nTotal sales of H/W products is " << totalsw ;
                  cout << "/nTotal sales of S/W products is " << totalhw ;
                  cout << "/nTotal Sum = " << bill ;
                }
          };


int main() 
{

calcbill hp;
hp.swgetlist();
hp.hwgetlist();

return 0;

}



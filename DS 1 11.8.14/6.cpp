#include<iostream>

using namespace std;

  int main()
  {
      cout <<"                    Reliance Fresh                       "  << endl;
      cout <<"```````````````````````````````````````````````````````  "  << endl;
      cout <<"S.No.  ||     Item                      ||   Price       "   << endl;
      cout <<"=======================================================  "   << endl;
      cout <<"  1 .         Potatoes                        18         "  << endl;
      cout <<"  2 .         Brinjal                         25         "  << endl;
      cout <<"  3 .         Onion                           8          "  << endl;
      cout <<"  4 .         Banana                          27         "  << endl;
      cout <<"  5 .         Cabbage                         14         "  << endl;

      int itemcode=1,i=0,total=0,cost,amount;
      int price[6]={0,20,20,20,20,20};

      for (i=0;itemcode!=0;i++)

         {

          cout << "Enter Item code (Press 0 to exit)" <<endl;
          cin >> itemcode;

                    if(itemcode!=0)
                    {  if(itemcode >5 || itemcode <0)
                       {cout << "Enter a valid code\n";}
                       else
                        {cout << "enter the number (in kgs)";
                         cin >> amount;
                         cost = price[itemcode]*amount;
                         total=total+cost;}
                    }

         }


       cout << "Total Bill =  " << total <<endl;
       cout << "Thank you for shopping with us \n" ;



  return 0;
  }



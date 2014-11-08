#include<iostream>

using namespace std;

int prime(int);

int main()
{
   int num,i;
   cout << "Enter a number  :";
   cin >> num;
   cout << "Prime numbers less than entered number are \n"  ;
   for (i=2;i<num;i++)
   {
     prime(i);
   }
   cout << endl;
return 0;
}

int prime(int a)
{
    int i;

    int flag=0;

    for(i=2;i<=(a/2);i++)
      {
         if(a%i == 0 )
           {
            flag=+1;
           }
      }
   if(flag<1)
     {cout << a <<endl;  }
  return 0;
}














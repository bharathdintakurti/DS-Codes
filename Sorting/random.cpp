#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


int main ()
 {

int c,t;
char fname[20];

cout<<" How many elements you want to sort ";
cin>>t;

int a[t];

ofstream gfgch;

cout << "Enter the input filename(It will be created if it does not exist): ";
cin >> fname;

gfgch.open(fname);
 if (gfgch.is_open())
  {
    while(t--)
    {
    c=rand()%200+1;
    gfgch << c << endl ;
    }
    gfgch.close();
  }
  else
    {
    cout << "Unable to open file";
    }

  return 0;


}


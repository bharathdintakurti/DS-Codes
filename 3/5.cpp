#include<iostream>

using namespace std;

int cmp(int);

int main()

{
int row;

cout << "Enter the dimension of square matrix :" << endl;
cin >> row;

cmp(row);
return 0;
}

int cmp(int d)


{
int  i=0,j=0;
cout << " Required Matrix \n\n";
d--;
while(1)
{

if(i+j==d)
    {cout << "0\t";}
  else if(i+j<d)
    {cout << "1\t";}
  else if(i+j>d)
    {cout << "-1\t";}
  
   j++;
  
  if(j==d+1)
   {
      i++;
      j=0;
      cout << "\n\n";
   }
  if(i==d+1)
  {
    return 0;
  }
}
return 1;
} 

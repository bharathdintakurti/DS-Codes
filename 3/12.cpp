#include<iostream>

using namespace std;

int cmp(int*,int*);

int main()
{
int a1[20];
int a2[20];

int i;

cout << "Enter the 20 elements of 1st array\n";

for(i=0;i<20;i++)
{  cin >> a1[i];}

cout << "Enter the 20 elements of 2nd array\n";

for(i=0;i<20;i++) 
{  cin >> a2[i];}
   
cmp(a1,a2);

return 0;
}

int cmp(int* arr1,int* arr2)
{
int i; 
for( i=0;i<20;i++)
  { if(*arr1!=*arr2)
       {  cout << "\nNot Equal\n";
          return 1;
       }
   arr1++;
   arr2++;
  }

cout << "\nEqual\n";
return 0;
}

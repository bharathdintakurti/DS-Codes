#include<iostream>

using namespace std;

int main()
{
int a,b,c;
cout << "Enter 3 numbers\n";
cin >> a >> b >> c;

int* pa = &a;
int* pb = &b;
int* pc = &c;

int* largest;
if(*pa > *pb)
  {
   if(*pa > *pc)
    { *largest=*pa;}
   else 
    { *largest=*pc;}
  }
else
  {
   if(*pb > *pc)
    { *largest = *pb;}
   else
    { *largest = *pc;}
  }

cout << "Largest number of the three is "<< *largest <<endl;
return 0;
} 

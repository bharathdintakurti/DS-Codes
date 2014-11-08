#include<iostream>

using namespace std;

int fibin(int);

int main()
{
cout << "Enter number of digits to print in fibonacci series";
int a;
cin >> a;

if(a>=1)
{
cout << "Fibonacci series  :\t";
int i;
for(i=1;i<a+1;i++)
{
cout << fibin(i) <<"\t" ;
}
}

else
{
cout << "Entered digit is not valid";
}
return 0 ;
}

int fibin(int f)
{

if(f==1)
{
return 0;
}
else if(f==2)
{
return 1;
}
else
{
int p;
p=fibin(f-1)+fibin(f-2);
return (p);
}
}

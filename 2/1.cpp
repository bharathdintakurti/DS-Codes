#include<iostream>

using namespace std;

void add(int,int);
void sub(int,int);
void mul(int,int);
void quo(int,int);
void modu(int,int);

int main()
{
int a,b;
cout << "Enter 2 numbers  :";
cin >> a >> b;

add(a,b);
sub(a,b);
mul(a,b);
quo(a,b);
modu(a,b);

return 0;
}

void add (int x,int y)
{cout << "Sum of the numbers is " << x+y << endl;}

void sub (int x,int y)
{cout << "Difference of the numbers is " << x-y << endl;}

void mul (int x,int y)
{cout << "Product of the numbers is " << x*y << endl;}

void quo (int x,int y)
{cout << "Quotient of the division of numbers is " << x/y << endl;}

void modu (int x,int y)
{cout << "Remainder of the division of numbers is " << x%y << endl;}



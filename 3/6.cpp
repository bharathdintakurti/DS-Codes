#include<iostream>
#include<cmath>

using namespace std;

void root(int*,int*,int*);

int main()
{
int a,b,c;

cout << "Enter co-efficients of quadratic equation : " << endl;

cin >>  a ;
cin >>  b ;
cin >>  c ; 

int* pa,* pb,* pc;

pa=&a;
pb=&b;
pc=&c;

root(pa,pb,pc);

return 0;
}

void root(int* x,int* y,int* z)

{
int a=*x;
int b=*y;
int c=*z;

float p,q;
double det;
det=(b*b) - (4*a*c);
if(a==0)
{
  cout << "Entered co-efficients do not constitute a quadratic equation" ;
  
}
else if(det<0)
{
  cout << "Roots are imaginary";
 
}
else
{
p = (-b + sqrt(det))/(2*a);
q = (-b - sqrt(det))/(2*a);

cout << "Roots of the equation are " << p << " and " << q;
}

cout << endl;
}

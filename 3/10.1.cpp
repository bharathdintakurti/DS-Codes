#include<iostream>

using namespace std;

int main()

{
int a,b;

cout << "Enter two integers\n";
cin  >> a >> b;

int* pa =&a;
int* pb =&b;

int* temp;
*temp = *pa;
*pa = *pb;
*pb = *temp;

cout << "Numbers after swapping are "<< *pa << " and " << *pb << endl;
return 0;
}

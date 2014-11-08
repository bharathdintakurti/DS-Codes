#include<iostream>

using namespace std;

void hanoi(char a,char b,char c,int n);

int main()
{
cout << "Enter the number of disks  :  ";

int n;
cin >> n;


cout << "************Tower of Hanoi****************\n";

hanoi('A','B','C',n);

return 0;
}

void hanoi (char a,char b,char c,int n)
{
if (n>0)
{
hanoi(a,c,b,n-1);

cout << "Move the uppermost disk from Peg " << a << " to Peg " << b << endl;

hanoi(c,b,a,n-1);

}  
}

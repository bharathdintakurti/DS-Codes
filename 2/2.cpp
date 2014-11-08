#include<iostream>

using namespace std;


float interest(float,float);
float amount(float,float);

int main()

{
cout << "Enter Beginning Balance :";

float prin;
float rate;
float inter;

int i;
cin >> prin ;

cout << "Enter rate of interest (per year) :";
cin >> rate;

int n;
cout << "Enter number of Quarters to show balance:  ";
cin >> n;

cout << "\tQuarter\t\tInterest credited in the quarter\tBalance at end of the Quarter" << endl;
cout << "==================================================================================================" << endl;
for(i=1;i<=n;i++)
{
inter = interest(prin,rate);
prin = amount(prin,inter);


cout << "\t"<< i <<"\t\t"<< inter <<"\t\t\t\t\t" << prin << endl;
}
return 0;
}


float interest(float p,float r)
{
float i =p*0.25*r/100;
return i;
}

float amount(float p,float i)

{
return (p+i);
}


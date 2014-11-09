#include<iostream>
using namespace std;
class A
{
protected:
char names[10];
float prices[10];

public:
int n;
void getval(int n)
{ 


cout<<"enter the names of the items and their prices";
for(int i=0;i<n;i++)
{
cin>>names[i];
}
for(int i=0;i<n;i++)
{
cin>>prices[i];
}
}


};
class B
{
protected:
int quantity[10];
public:

void get(int n)
{ cout<<"enter the quantity of each item sold";

for(int i=0;i<n;i++)
{ cin>>quantity[i];
}
}
};
class hardware:public A,public B
{
public:

float calctotal(int n)
{ float sum=0.0;
for(int i=0;i<n;i++)
{
sum=sum+quantity[i]*prices[i];
}
return sum;
}
};
class software:public A,public B
{
public:


float calcsum(int n)
{
float total=0.0;
for(int i=0;i<n;i++)
{ 
total=total+quantity[i]*prices[i];
}
return total;
}
};
int main()
{
hardware h;
software s;
int p1,p2;
cout<<"enter the number of hardware items";
cin>>p1;
cout<<"following are the details of the hardware items"<<endl;

h.getval(p1);
cout<<"enter the number of software items";
cin>>p2;
cout<<"following are the details of the software items"<<endl;
s.getval(p2);
cout<<"the following is the list of sales of hardware items"<<endl;
h.get(p1);
cout<<"following is the list of sales of software items"<<endl;
s.get(p2);
cout<<"total amount in sales of hardware items is"<<h.calctotal(p1)<<endl;
cout<<"total amount in sales of software items is"<<s.calcsum(p2)<<endl;
return 0;
}


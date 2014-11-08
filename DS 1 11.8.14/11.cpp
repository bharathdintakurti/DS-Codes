#include<iostream>

using namespace std;

int main()
{
    cout << "\t\t\tAugust 2014\n";
    cout << "\t M\tT\tW\tT\tF\tS\tS\n" ;
    cout << "================================================================================";
    cout << "\t\t\t\t\t\t1\t2\n\t ";
    int date=3,i=0;
    while(date<32)
    {
        cout << date <<"\t";
        date=date+1;
        i=i+1;
        if(i==7)
        {
            cout << "\n\t ";
            i=0;
        }
    }
}

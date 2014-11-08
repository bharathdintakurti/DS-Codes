#include<iostream>

using namespace std;

int main()
{
    int i;
    float sum=0,num;
    cout << "Enter first number  :";
    cin >> num;
    sum=sum+num;
    for (i=0;i<3;i++)
    {
            cout << "Enter next number  :";
            cin >> num;
            sum=sum+num;

    }
    cout << "Average of four numbers is   " << sum/4 ;
    return 0;

}

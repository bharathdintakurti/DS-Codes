#include<iostream>

using namespace std;

int main()
{
    int i,junk;
    long int num,rev=0;
    cout << "Enter a six digit number  :";
    cin >> num;

    for(i=0;i<6;i++)
    {
        junk=num%10;
        num=num/10;
        rev=rev*10+junk;


    }
    cout << "Reversed number is  " << rev ;

return 0;
}

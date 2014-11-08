#include<iostream>
#include<cmath>
void reverse(long int,int);

using namespace std;

int main()
{
    long int num;
    int len;
    
    cout << "Enter the number of digits  :";
    cin >> len;
    cout << "Enter the number  :";
    cin >> num;

    reverse(num,len);

    return 0;
}
 


void reverse(long int num,int len)
{
    int i,junk;

    for(i=0;i<len;i++)
    {
        junk=num%10;
        num=num/10;
        num=(junk*pow(10,len))+ num;
        reverse(num,len);


    }
    cout << "Reversed number is  " << num  << endl;

}

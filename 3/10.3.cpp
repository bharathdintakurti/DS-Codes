#include<iostream>

using namespace std;

int main()
{
int n;
cout << "Enter the number of elements in the array : ";
cin >> n;

int arr[n];

cout << "Enter the elements\n";
int i;
for(i=0;i<n;i++)
{ cin >> arr[i];}

int search;

cout << "Enter search element :  ";
cin >> search;

int freq=0;
for(i=0;i<n;i++)
{
if(*(arr+i)==search)
{
  freq++;
}
}

cout << "Frequency of occurence is " << freq << endl;

return 0;
}

#include<iostream>

using namespace std;

int main()
{
int i,j,k,l;

int num[10]={1,2,3,4,5,6,7,8,9,10};

int arr[50];

int freq[10]={0};

cout << "Enter a series of 50 numbers :\n";
for(i=0;i<50;i++)
{
  cin >> arr[i] ;
  if(arr[i]>10 || arr[i]<1)
    {
        cout << "Enter a valid number (1-10)";
        i--;
    }
}

for(j=0;j<50;j++)
{
  for(k=0;k<10;k++)
   {
     if(arr[j]==num[k])
        {
           freq[k]++;
        }
  } 
}

cout << "\n\n\n";
cout << "\tHistogram\n";
for(l=0;l<10;l++)
{
cout << "Frequency of number " << num[l] << "  is " << freq[l] <<endl;
}
return 0;
}

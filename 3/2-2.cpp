#include<iostream>

using namespace std;

void sort(char*,int);

int main()
{

char arr[50];
int i,j;

cout << "Enter 50 elements  : " <<  endl;

for(i=0;i<50;i++)
{
cin >> arr[i];
}

sort(arr,50);

cout << "Array after sorting is : " << endl;

for(j=0;j<50;j++)
{
cout << arr[j] << endl;
}

return 0;
}

void sort(char* a,int n)
{

char temp;
int i,j;
int swap;
int y=49;
for(i=0;i<50;i++)
 {
  swap=0;
  for(j=0;j<y;j++)
    {
      if(a[j]>a[j+1])
        {
           swap++;
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
        }
     }
 if(swap==0)
  {break;}
  y--;

}

}

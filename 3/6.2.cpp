#include<iostream>

using namespace std;

int main()
{
int n;
cout << "Enter the dimension of matrix";
cin >> n;

int arr[n][n];

cout << "Enter the elements\n";

int i,j;
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
    { 
      cin >> arr[i][j];
    }
}

int sum[n][2];
int diag[2]={0,0};

for(j=0;j<n;j++)

{   sum[j][0]=0;
    for(i=0;i<n;i++)
      {   
          sum[j][0]=sum[j][0]+arr[j][i];
      }
}
for(i=0;i<n;i++)

{    sum[i][1]=0;
    for(j=0;j<n;j++)
      {
          sum[i][1]=sum[i][1]+arr[j][i];
      }
}

for(i=0;i<n;i++)

{
   diag[0]=diag[0]+arr[i][i];
}

for(i=0;i<n;i++)

{
   diag[1]=diag[1]+arr[i][n-1-i];
}



for(i=0;i<n;i++)
  cout << "Sum of elements of row "<< i <<" is  " << sum[i][0] <<endl;

for(i=0;i<n;i++)
  cout << "Sum of elements of column "<< i <<" is  " << sum[i][1] <<endl;

for(i=0;i<2;i++)
  cout << "Sum of elements of diagnal "<< i <<" is  " << diag[1] <<endl;
return 0;
}

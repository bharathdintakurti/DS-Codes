#include<iostream>

using namespace std;

int main()
{
int i,j,k,n;

cout << "Enter the number of elements:  ";
cin >> n;

int arr[n];

cout << "Enter the elements \n";

for(int i=0;i<n;i++)
{  cin >> arr[i]; }

int r,c ;

cout << "Enter the dimension of matrix (rows,columns) \n";

cin >> r >> c ;

int arr2[r][c];

if(n!=r*c)
{cout << "INVALID dimensions\n";}
else
{i=0;
 for(j=0;j<r;j++)
   {
    for(k=0;k<c;k++)
     {
      arr2[j][k]=arr[i];
      i++;}
    } 

cout << "Required 2D array is \n";
for(i=0;i<r;i++)
  { for(j=0;j<c;j++)
     {
        cout << arr2[i][j] <<"\t";

     }
   cout<<endl; 
  }
}
return 0;
}

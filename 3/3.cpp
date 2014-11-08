#include<iostream>

using namespace std;

int main()
{
int lines;
int i,j;
cout << "Enter the number of lines to print";

cin >> lines;

int arr[lines][lines];


for(j=0;j<lines;j++)
{
  for(i=0;i<lines;i++)
   {
       if(j==0)
         {
            arr[i][j]=1;
         }
       else if(j==i)
         {
            arr[i][j]=1;
         }
       else if(j<i)
         {
           arr[i][j]=arr[i-1][j]+arr[i-1][j-1];

         }
    }
}

for(i=0;i<lines;i++)
{
  for(j=0;j<lines;j++)
   {
      if(j<=i) 
      cout << arr[i][j] << "\t";
    }
  cout <<endl;
}

return 0;

}










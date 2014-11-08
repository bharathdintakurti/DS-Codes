#include<iostream>

using namespace std;

int main()
{


int n;

cout << "Enter the number of rows :";
cin >> n;

int row[n];

int *arr[n];

int i,j;
for(i=0;i<n;i++)
 { 
   cout << "Enter number of elements in this row (row "<<i+1<<" )  :\n";
   cin >> row[i];
   
   arr[i] = new int [row[i]];

   cout << "Enter the elements:\n";
   
   for(j=0;j<row[i];j++)
   { cin >> *(arr[i]+j);}
 }

cout << "Entered ragged array is  :\n";

for(i=0;i<n;i++)
 {cout << row[i] <<" | ";
  for(j=0;j<row[i];j++)
    { cout << *(arr[i]+j) << "\t";}
  cout << endl;
 }

return 0;
}

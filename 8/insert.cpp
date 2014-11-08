#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void insertsort(int *,int);

int main()
{
  int n;
  cout << "Enter the length of the array to be sorted :";
  cin >> n;

  int a[n];
 
  srand(time(NULL));

  for(int i=0;i<n;i++)
     {a[i] =  rand()%1000 + 1;}
  


  cout << "Randomly generated array for sorting : " <<  endl;
  
  for(int j=0;j<n;j++)
     {cout << a[j] << endl;}

  insertsort(a,n);
  
  cout << endl << endl;
  cout << "Array after sorting (using insertion sort): " <<  endl;
  
  for(int j=0;j<n;j++)
     {cout << a[j] << endl;}

  return 0;
} 



void insertsort(int *arr,int n)
{
 int i,j;
 int key;
 for(int j=1;j<n;j++)
 {
  key = arr[j];
  i=j-1;
  
  while(i>=0 && arr[i]>key)
	{
	 arr[i+1]=arr[i];
	 i = i-1;
	}
  arr[i+1]=key;
 }
  
}

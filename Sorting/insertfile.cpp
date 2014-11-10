
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void insertsort(int *,int);


int main () 
{
  int temp;
  int arr[1000];
  int size=0;
  char fname[20];
  cout << "Enter file name :";
  cin >> fname;
  ifstream myfile (fname);
  if (!(myfile.is_open()))
  {
    
    cout << "Unable to open file" << endl ; 
  }

  else 
  {
     cout << "File opened successfully\n";
  }
  int i;

  while(!myfile.eof())
  {
   myfile >> temp;
   arr[size] = temp;
   size++;
  }
  
  cout << "Array to be sorted is :\n";
  for(i=0;i<size;i++)
  {
    cout << arr[i] << endl;
  }
  
  insertsort(arr,size);
  
  cout << "Array after sorting is :\n";
  for(i=0;i<size;i++)
  {
    cout << arr[i] << endl;
  }

  myfile.close();


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


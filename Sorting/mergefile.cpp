
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void mergesort(int *,int,int);
void merge(int *,int,int,int);

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

  mergesort(arr,0,size-1);

  cout << "Array after sorting is :\n";
  for(i=0;i<size;i++)
  {
    cout << arr[i] << endl;
  }

  myfile.close();


  return 0;
}

void mergesort(int *arr,int p,int r)
{
 int q;
 if(p<r)
 {  q =(p+r)/2;
    mergesort(arr,p,q);
    mergesort(arr,q+1,r);
    merge(arr,p,q,r);
 }

}

void merge(int *arr,int p,int q,int r)

{

 int n1 = q-p+1;
 int n2 = r-q;

 int tmp1[n1+1];
 int tmp2[n2+1];

 for(int i=0;i < n1;i++)
  tmp1[i] = arr[p+i];
 for(int j=0;j < n2;j++)
  tmp2[j] = arr[q+j+1];




 tmp1[n1] = 2000000;
 tmp2[n2] = 2000000;

 int i=0,j=0;
 int k;

 for(k=p; k<=r && i<=n1 && j<=n2 ;k++)
   {
     if(tmp1[i] < tmp2[j])
    {
      arr[k] = tmp1[i];
      i++;
    }
    else
    {
      arr[k] = tmp2[j];
      j++;
    }

  }

}


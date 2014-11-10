
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void quicksort(int* ,int,int);
int part(int*,int,int);
void swap(int*,int*);


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

  quicksort(arr,0,size-1);

  cout << "Array after sorting is :\n";
  for(i=0;i<size;i++)
  {
    cout << arr[i] << endl;
  }

  myfile.close();


  return 0;
}


void quicksort(int *arr,int p,int r)
{

 int q;
 if(p<r)

 {

     q = part(arr,p,r);
     quicksort(arr,p,q-1);
     quicksort(arr,q+1,r);

 }

}




int part(int *arr,int p,int r)

{

    int
    pivot = arr[r];
    int i = p-1;
    int j;

    for(j=p;j<r;j++)

    {



        if(arr[j]<=pivot)

        {

            i = i+1;
            swap(arr[i],arr[j]);

        }

    }

    swap(arr[i+1],arr[r]);
    return i+1;

}


void swap(int * s1,int * s2)

{
    int *tmp;
    *tmp = *s1;
    *s1 =  *s2;
    *s2 =  *tmp;
}

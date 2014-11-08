#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void mergesort(int *,int,int);
void merge(int *,int,int,int);

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

  mergesort(a,0,n-1);

  cout << endl << endl;
  cout << "Array after sorting (using merge sort): " <<  endl;

  for(int j=0;j<n;j++)
     {cout << a[j] << endl;}


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
 int n2 = r-(q+1)+1;

 int tmp1[n1+1];
 int tmp2[n2+1];

 for(int i=0;i < n1;i++)
  tmp1[i] = arr[p+i];
 for(int j=0;j < n2;j++)
  tmp2[j] = arr[q+j+1];




 tmp1[n1] = 2000;
 tmp2[n2] = 2000;

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

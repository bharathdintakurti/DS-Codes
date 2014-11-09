#include<iostream>
#include<string>


using namespace std;

void quicksort(string *,int,int);
int part(string *,int,int);
void swap(string*,string *);
int main()
{
  int n;
  cout << "Enter the length of the array to be sorted :";
  cin >> n;

  string a[n];

  cout << "Enter the inputs (any strings): \n";

  for(int i=0;i<n;i++)
         {cin >> a[i]; }

  cout << "Input array for sorting : " <<  endl;

  for(int j=0;j<n;j++)
     {cout << a[j] << "   ";}

  quicksort(a,0,n-1);

  cout << endl ;
  cout << "Array after sorting (using quick sort algorithm): " <<  endl;

  for(int j=0;j<n;j++)
     {cout << a[j] << "   ";}

  return 0;
}



void quicksort(string *arr,int p,int r)
{
 int q;
 if(p<r)
 {
     q = part(arr,p,r);
     quicksort(arr,p,q-1);
     quicksort(arr,q+1,r);
 }

}


int part(string *arr,int p,int r)
{
    string tmp = arr[r];
    int i = p-1;

    int j;
    for(j=p;j<r;j++)
    {

        if(arr[j]<=tmp)
        {
            i = i+1;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);

    return i+1;

}



void swap(string * s1,string * s2)
{

    string *tmp;

    *tmp = *s1;
    *s1 =  *s2;
    *s2 =  *tmp;

}

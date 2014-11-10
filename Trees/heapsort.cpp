#include<iostream>

using namespace std;

void heapify(int *,int);
void buildheap(int *,int);
void heapsort(int *,int);
void swap(int*,int*);

    int heapsize;


int main()
    {
            int n,i;
            cout << "Enter no. of elements = ";
            cin >> n;
            int arr[n];
            cout << "Enter array elements = ";
            for(i=0;i<n;i++)
            {

             cin >> arr[i];
            }

            heapsort(arr,n);
            for(i=0;i<n;i++)
            {

             cout << arr[i];
            }

        return 0;
    }
 void heapsort(int *arr,int len)
 {
   int i;
   buildheap(arr,len);
    for(i= len-1;i>=1;i--)
    {
        swap(&arr[0],&arr[i]);
        heapsize = heapsize -1;
        heapify(arr,0);
    }
 }
void heapify(int *arr,int i)
{
    int l=2*i,r=2*i+1,largest;
    if(l<heapsize && arr[l]>arr[i])
        largest = l;
    else
        largest = i;
    if(r<heapsize && arr[r]>arr[largest])
        largest = r;

    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,largest);
    }
     }
void buildheap(int *arr,int len)
{
    heapsize = len;
    int i;
    for(i =len/2;i>=0;i--)
    {
        heapify(arr,i);
    }
}
void swap(int *a ,int *b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}

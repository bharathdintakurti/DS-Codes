#include<iostream>

using namespace std;



int left (int i)
{
        return (2*i) ;
}

int right (int i)
{
        return (2*i + 1) ;
}

void maxheapify(int *a,int i,int heapsize)
{
    int l = left(i);
    int r = right(i);
    int largest,temp;

    if( l<=heapsize && a[l]>a[i] )
        largest = l;
    else largest = r;

    if( r<=heapsize && a[r]>a[largest])
         largest = r;

    if( largest !=i )
         {

          temp = a[i];
          a[i] = a[largest];
          a[largest] = temp;
          maxheapify(a,largest,heapsize);

         }
}

void buildmaxheap(int *a,int heapsize)
{

    for(int i=heapsize/2;i>=1;i--)
        maxheapify(a,i,heapsize);

}

void heapsort(int *a,int size)
{
    int temp;
    int heapsize = size;
    buildmaxheap(a,heapsize);

    for(int i = size;i>=2;i--)
        {
         temp = a[0];
         a[0] = a[i];
         a[i] = temp;
         heapsize--;
         maxheapify(a,0,heapsize);
        }
}



int main()
{
    int a[11];
    for(int i=1;i<=10;i++)
    {

        cin >> a[i];
    }


    heapsort(a,10);
    for(int i=1;i<=10;i++)
    {

        cout << a[i];
    }
return 0;

}



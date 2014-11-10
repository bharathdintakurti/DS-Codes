#include <iostream>
#include <cstdlib>

using namespace std;

const unsigned long long infinity = -1ULL;

void merge(int* A,int p,const int q, const int r)
{
    const int n_1=q-p+1;
    const int n_2=r-q;
    int* L = new int [n_1+1];
    int* R = new int [n_2+1];
    L[n_1]=infinity;
    R[n_2]=infinity;
    for(int i = 0; i < n_1; i++) 
        L[i] = A[p+i];
    for (int j = 0; j < n_2; j++)
        R[j] = A[q+j+1];

    int i=0;
    int j=0;
    // for(int k = p; k <= r; p++)   broken code
    int k;
    for(k=p; k <= r && i < n_1 && j < n_2; ++k)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;        
        }
    }
    // Added the following two loop.
    // Note only zero or one loop will actually activate.
    while (i < n_1) {A[k++] = L[i++];}
    while (j < n_2) {A[k++] = R[j++];}
}     

void merge_sort(int* A, const int p, const int r)
{
    if (p < r) 
    {
        int q = (p+r)/2;
        merge_sort(A, p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
}

int main()
{
    int length;
    cout << "Specify array length" << endl;
    cin >> length;
    cout << "\n";

    int A [length];

    //Populate and print the Array
    for(int i = 0; i < length; i++)
    {
         A[i] = rand()%99-1;
                 cout << A[i] << " ";
    }    

    cout << "\n";
    merge_sort(A,0,length-1);
    cout << "Your array has been merge_sorted and is now this: " <<         endl;
    for(int i = 0; i < length; i++) cout << A[i] << " ";

    cout << "\n";
    //cout << infinity << endl;
    return 0;
}

#include<iostream>

using namespace std;

int main()
{
int *pSm,*pWalk,*pLast;
int i,n;

cout << "Enter number of elements in the array :";
cin >> n;

int arr[n];
for(i=0;i<n;i++)
 { cin >> arr[i];}

pSm=arr;
pWalk=arr;
pLast=&arr[n-1];

while(pWalk!=pLast)
{ 
  if(*pWalk<*pSm)
   { *pSm=*pWalk;}
  *pWalk++;
}

cout << "Smallest element in entered array is " << (*pSm) << endl;

return 0;

}


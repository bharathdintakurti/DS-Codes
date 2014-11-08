#include<iostream>

using namespace std;

int main()
{
int r,c;

cout << "Enter the number of rows and columns  :\n";
cin >> r >> c;

int *arr;

arr = new int [c*r];

cout << "Enter the elements :\n";

int i,j;

for(i=0;i<r;i++)

   {  for(j=0;j<c;j++)
       { cin >> *(arr+c*i+j) ;}
    
   }
  
int *rmin,*rmax;
float *rsum;

rsum= new float [r];
rmin= new int [r];
rmax= new int [r];

int rminmin=(*arr);
int rmaxmax=(*arr);

for(i=0;i<r;i++)
{ 
  *(rmin+i)=*(arr+c*i);
  *(rmax+i)=*(arr+c*i);
  *(rsum+i)=0;
 
   for(j=0;j<c;j++)
    { 
//Comparing arr elements to get rmin,rmax,rsum
      if(*(rmin+i)>(*arr+c*i+j))
        { *(rmin+i)=*(arr+c*i+j);}
       
      if(*(rmax+i)<(*arr+c*i+j))
        { *(rmax+i)=*(arr+c*i+j);}
      
     
      *(rsum+i)=(*(rsum+i))+(*(arr+c*i+j)); 
     }
//Comparing rmin to get rminmin and rmax to get rmaxmax
     if(rminmin>*(rmin+i))
         rminmin=(*(rmin+i));
     if(rmaxmax<*(rmax+i))
         rmaxmax=(*(rmax+i));
}

cout << endl;
for(i=0;i<r;i++)
{
 cout << "Row minimum of row "<< (i+1) << " = " <<*(rmin+i) << endl;
 cout << "Row maximum of row "<< (i+1) << " = " <<*(rmax+i) << endl;
 cout << "Row average of row "<< (i+1) << " = " <<(*(rsum+i)/r) << endl << endl;;
}

cout << "Minimum of row minimums is " <<  rminmin << endl;
cout << "Maximum of row maximums is " <<  rmaxmax << endl;
return 0;
}

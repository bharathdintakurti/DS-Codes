#include<iostream>

using namespace std;

int main()
{
int n1,n2;

cout << "Enter the dimensions of 1st square matrix  :";
cin >> n1;
cout << "Enter the dimensions of 2nd square matrix  :";
cin >> n2;

if(n1==n2)

{int n=n1;
 int a[n][n];
 int b[n][n];
 int i,j;
 cout << "Enter the elements of 1st array\n";
 for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
     { cin >> a[i][j]; }
  }
 cout << "Enter the elements of 2nd array\n";
  for(i=0;i<n;i++)
  {for(j=0;j<n;j++)
     { cin >> b[i][j]; }
  }


int p1[n][n];
int p2[n][n];


//multiply(a*b=p1);

int k;

for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
  { p1[i][j]=0;
    for(k=0;k<n;k++)
     {
        p1[i][j]+=a[i][k]*b[k][j];
     }
  }
}

for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
  { p2[i][j]=0;
    for(k=0;k<n;k++)
     {
        p2[i][j]+=b[i][k]*a[k][j];
     }
  }
}

for(int i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
 if(p1[i][j]!=p2[i][j])
   { cout << "Not Commutative\n";
    return 0;}
}
}
cout << "Commutative\n";

}
else
{  cout << "Multiplication not possible\n";}

  return 0;
}




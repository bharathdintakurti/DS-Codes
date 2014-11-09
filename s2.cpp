#include<iostream>
#include<cmath>
using namespace std;


void prime(int ,int);
int main()

{
    int n;
    cin >> n;

    int arr[n][2];


    for(int i=0;i<n;i++)
    {
        cin >> arr[i][0] >> arr[i][1] ;

    }


    for(int j=0;j<n;j++)
    {
        prime(arr[j][0],arr[j][1]);
        cout << "\n\n";
    }

return 0;


}

void prime(int a,int b)

{
    ar[b-a+1];
    for(int k=a;k<=b;k++)
    {
        int flag=0;
        for(int p=2;p<sqrt(k);p++)
        {
            if(k%p==0)
                flag=1;
                ar[]
        }
        if(flag==0 && k!=1)
            cout << k << endl;
    }
}


#include<iostream>

using namespace std;

int main()
{
    int arr[3][3];
    int i,j;
    cout << "Enter the elements \n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the elements in matrix form \n";
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout <<"\n";
    }
}

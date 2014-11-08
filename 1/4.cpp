#include<iostream>

#define pi 3.14159265358979323846


using namespace std;

int main()
{
    float rad;
    cout << "Enter the number of radians";
    cin >> rad;
    cout << "The entered value in degrees is  " << (rad*180)/(2*pi) ;
    return 0;
}

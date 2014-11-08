#include<iostream>

using namespace std;

int main()
{
    int fahren;
    float degre;
    cout << "Enter the temperature in fahreheit  :" ;
    cin >> fahren;
    degre=(5*(fahren-32))/9;
    cout << "Temperature is  " << degre << "'C\nHave a great day!";

}

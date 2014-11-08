#include<iostream>

using namespace std;

int main ()

{

    int marks,junk;
    cout << "Enter your marks    ";
    cin >> marks;

    junk=(100-marks)/10;

    cout << "Your grade is  ";



    switch(junk)
    {
    case 0:
        cout << "S.  Congrats! ";
        break;
    case 1:
        cout << "A.  Congrats! ";
        break;
    case 2:
        cout << "B.  Congrats! ";
        break;
    case 3:
        cout << "C.  Congrats! ";
        break;
    case 4:
        cout << "D.  Congrats! ";
        break;
    case 5:
        cout << "E.  Congrats! ";
        break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "F.  You Failed";
        break;
    default:
        cout << "NULL. \nEnter a valid mark";

    }
  return 0;
}

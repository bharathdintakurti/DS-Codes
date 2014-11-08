#include<iostream>

using namespace std;

int main()
{   cout << "Enter an operand";
    float res=0,inp;
    cin >> res;
    char c ='0';
    cout << "Enter an operation(Press = to show result)";
    cin >> c;
    while(c!='=')
    {


        switch(c)
        {
        case '+':
            cout << "Enter next operand";
            cin >> inp;
            res=res+inp;
            break;
        case '-':
            cout << "Enter next operand";
            cin >> inp;
            res=res-inp;
            break;
        case '/':
            cout << "Enter next operand";
            cin >> inp;
            res=res/inp;
            break;
        case '*':
            cout << "Enter next operand";
            cin >> inp;
            res=res*inp;
            break;

        default:
            cout << "Invalid Operation.Choose from + - * / \n";

        }
        cout << "Enter an operation(Press = to show result)";
        cin >> c;
    }
    cout << "Result = " << res;
    return 0;
}

#include<iostream>
#include<string>

using namespace std;

int main()
{

struct studentrec{

string name;
int roll;
int sem;
} ;

studentrec student;

cout << "Enter the student name  :";
cin >> student.name;

cout << "Enter the roll no  :";
cin >> student.roll;

cout << "Enter the semester :";
cin >> student.sem;

cout << "\n\nEntered student details  " << endl <<endl;

cout << "Name:\t"<< student.name << endl;
cout << "Roll:\t"<< student.roll << endl;
cout << "Sem:\t"<< student.sem << endl;

return 0;

}

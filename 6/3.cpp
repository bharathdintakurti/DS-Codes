#include<iostream>

using namespace std;

class student_perf{

 private:
    string name;
    int roll;
    float marks[2];
    float sum;
    float cgpa;

 public:
    student_perf()
    {
     marks[0]=0;
     marks[1]=0;
     sum=0;
     cgpa=0;
    }

    void readdata();
    void calc();
    void print();
  };

void student_perf::readdata()
{

cout << "Enter student name :";
cin >> name;

cout << "Enter the roll number:";
cin >> roll;

cout << "Enter marks of two subjects:\n";
cin >> marks[0] >> marks[1];

sum  = marks[1]+marks[0];
}

void student_perf::calc()
{
 cgpa=(sum/20);
}


void student_perf::print()
{
cout << "CGPA obtained by student " << cgpa << endl;
}

int main()

{
student_perf stud;

stud.readdata();

stud.calc();

stud.print();

return 0;

}





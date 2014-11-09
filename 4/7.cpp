#include<iostream>
#include<string>

using namespace std;

struct dateofbirth{
    int day;
    int month;
    int year;
};

struct studentrec{

    string name;
    int roll;
    int sem;
    int marks[5];
    dateofbirth dob;
    int sum;
}; 

struct studentrec display(struct studentrec stud);
int main()
{

int n,i,j,sum;

cout << "Enter the number of students  :";
cin >> n;

struct studentrec student[n];

sum=0;
for(i=0;i<n;i++)
{
cout << "Enter the student name of student "<<(i+1) << ":";
cin >> student[i].name;

cout << "Enter the roll no  :";
cin >> student[i].roll;

cout << "Enter the semester :";
cin >> student[i].sem;

cout << "Enter the day of birth :";
cin >> student[i].dob.day;

cout << "Enter the month of birth :";
cin >> student[i].dob.month;

cout << "Enter the year of birth :";
cin >> student[i].dob.year;

cout << "Enter marks of 5 subjects:\n";
for(j=0;j<5;j++)
  { cin >> student[i].marks[j];
    sum = + student[i].marks[j];}
  student[i].sum=sum;
cout << endl;
}

for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
   {
     if(student[i].sum > student[j].sum)
       {
         struct studentrec temp;
         temp = student[j];
         student[j]=student[i];
         student[i]=temp;
       }
   }
}


cout << "Rank List:\n";



for(i=0;i<n;i++)

{cout <<"Rank  " <<(i+1) << endl;
 display(student[i]);}

return 0;
}





struct studentrec display(struct studentrec student)
{
cout << "" << endl << endl;

cout << "Name:\t"<< student.name << endl;
cout << "Roll:\t"<< student.roll << endl;
cout << "Sem:\t"<< student.sem << endl;
cout << "Date of Birth: "<< student.dob.day <<"/"<< student.dob.month <<"/"<< student.dob.year<< endl;

return student;
}


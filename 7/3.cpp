#include<iostream>
#include<string>

using namespace std;

class stud_rec{
     protected:
	string name;
	int roll;
	int marks[5];
     public:
	stud_rec()
        {  name = "NULL";
	   roll = 00;
	   for(int i=0;i<5;i++)
               marks[i]=0;
        }
        void getvalue()
        {  cout << "Enter student name (without spaces)  :";
	   cin >> name;
	   cout << "Enter roll number :";
	   cin >> roll;
           cout << "Enter marks of 5 subjects :\n";
	   for(int i=0;i<5;i++)
		{ cin >> marks[i];
                  if(marks[i]<0 || marks[i]>100)
                     {  cout << "Enter valid marks \n";
                        i--;
                     }
                }
        }
        	};

class stud_calc : public stud_rec{
      protected:
	  int total;
	  float cgpa;
      public:
	  stud_calc()
	  { total=0;
            cgpa=0;
          }
	  void calctotal()
          {
           for(int i=0;i<5;i++)
                 total=total+marks[i];
          }
          void calccgpa()
          {
           cgpa=total/10;
          }
		};

class stud_disp : public stud_calc{
	public:
	 void display()
         {

          cout << "************Results:Test 1*************\n\n";
          cout << "Name of the student: " << name << endl;
          cout << "Roll Number: " << roll << endl << endl;
          cout << "*************Mark Sheet *****************\n";
          cout << "  Subject                 Marks         \n";
          cout << "''''''''''''''''''''''''''''''''''''''''\n";
          cout << "    EC 2                 "<<marks[0]<<" \n";
          cout << "    DS                   "<<marks[1]<<" \n";
          cout << "    CS                   "<<marks[2]<<" \n";
          cout << "    DSP                  "<<marks[3]<<" \n";
          cout << "    DC                   "<<marks[4]<<" \n";
          cout << "========================================\n";
          cout << "\n\n";
          cout << "Total marks obtained :" << total << endl;
	  cout << "CGPA obtained is " << cgpa << endl  <<  endl;
         }
		};

int main()
{

stud_disp stud1;

stud1.getvalue();
stud1.calctotal();
stud1.calccgpa();
stud1.display();

return 0;

}

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int der (void);

class ssalc{
	protected:
		int s;
		float a;
		float p;
	public:
              	ssalc()
 		{
		cout << "This is constructor" <<  endl;
		}
		~ssalc()
                {
                cout << "This is destructor" <<  endl;
                }

		void getval()
		{
		cout << "Enter side :";
		cin  >> s;
		}
		void calc()
		{
		a = s*s;
		p = 4*s;
		}
		void print()
		{
		cout << "Area is  " << a;
                cout << "\nPerimeter is " << p << endl;   	 
		}
            };


int main()
{
cout <<"This is main" << endl;
der();
cout <<"Main end" << endl;
return 0;
}











int der()
{
ssalc sq;
sq.getval();
sq.calc();
sq.print();

return 0;
}


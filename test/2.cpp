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
                friend void bhara(ssalc s);
         
		};
void bhara(ssalc sq)
{
cout << "This is friend func.Side of square is " << sq.s << endl;
}



int main()
{
ssalc sq;
sq.getval();




bhara(sq);

return 0;
}

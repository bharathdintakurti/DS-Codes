#include <iostream>

using namespace std;


class polygon {
      protected:
          int width, height;
      public:
          void setvalues (int a, int b)
             { width=a; height=b;}

             };

class poloutput {
      public:
          void output (int i);
             };

void poloutput::output (int i) {
	cout << "Area of the polygon is "<< i << endl;
		}
class rectangle: public polygon, public poloutput {
      public:
          int area ()
             { return (width * height); }
                     };

class triangle: public polygon, public poloutput {
      public:
          int area ()
            { return (width * height / 2); }
              };


int main () 
{
int n;
cout << "Choose your polygon ( 1 for triangle, 2 for rectangle) :";
cin >> n;

switch (n)
{

rectangle rect;
triangle tri;

int h,w;

case 1:
      
      cout << "Enter the height and width of rectangle :\n";
      cin >> h >> w;
      rect.setvalues(h,w);
      rect.output(rect.area());
      break;
case 2:
      
     
      cout << "Enter the height and base of triangle :\n";
      cin >> h >> w;
      tri.setvalues(h,w);
      tri.output(tri.area());
      break;


default: cout << "Invalid Choice";

}

return 0;
}

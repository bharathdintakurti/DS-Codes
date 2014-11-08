#include<iostream>

using namespace std;


class rect;


class square{
 private:
   int a;
   int b;  
   int area;
 public:
   square()
    { a=b=0;}
   void getvalue()
   { cout << "Enter the side of the square:\n";
     cin >> a;
     b=a;
   }
   void calcarea();
   void print();
       };


class rect{
 private:
   int a;
   int b;
   int area;
 public:
 rect()
  { a=0;b=0;}
  void getvalue()
  { cout << "Enter length and breadth of rectangle:\n";
    cin >> a >> b;}
 friend void square::calcarea()
  { area=a*b;}
 friend void square::print()
  { cout << "Area of given quadrilateral is " << area << endl; } 

          };

int main()
{

rect r;
square s;

int n;

cout << "Enter an option ( 1 for rectangle, 2 for square):";
cin >> n;

switch (n)
{
case 1:r.getvalue();r.calcarea();r.print();break;
case 2:s.getvalue();s.calcarea();s.print();break;
default:cout << "Invalid option";
}

return 0;
}


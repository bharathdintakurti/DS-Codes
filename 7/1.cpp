#include<iostream>
#include<cmath>

using namespace std;


class polygon{
	protected:
		float area;
		float perimeter;
	public:
		void display()
		{ cout << "Area of the polygon is "<< area << endl;
		  cout << "Perimeter of the polygon is " << perimeter << endl;}
	     };

class rectangle:public polygon{
	private:
		int height;
		int width;
	public:
		void getvalues()
		 { cout <<"Enter height and width of rectangle: \n";
		   cin >> height >> width;
		 }
		void calcarea()
		 {  area = height*width ;}
		void calcperi()
		 {  perimeter = 2*(height+width);}
 	                       };

class triangle : public polygon{
        private:
                int s1;
                int s2;
		int s3;
        public:
                void getvalues()
                 { cout <<"Enter the 3 sides of the triangle: \n";
                   cin >> s1 >> s2 >> s3;
                 }
                void calcarea()
                  {  float s;
		     float ar;
                     s=((s1+s2+s3)/2);
		     ar=(s*(s-s1)*(s-s2)*(s-s3));
                     if(ar<=0)
                        cout << "Given Lengths do not constitute a triangle\n";
		     area = sqrt(ar);
                  }
                void calcperi()
                 {  perimeter = s1+s2+s3 ;}
                               };


int main()
{
int n;
cout << "Choose the type of polygon ( 1 for rectangle , 2 for triangle)  :";
cin >> n;

switch (n)
{

case 1:
	rectangle rect;
	rect.getvalues();
	rect.calcarea();
	rect.calcperi();
	rect.display();
	break;
case 2:
        triangle tri;
        tri.getvalues();
        tri.calcarea();
        tri.calcperi();
        tri.display();
        break;

default: cout << "Invalid choice\n";
}
return 0;

}




















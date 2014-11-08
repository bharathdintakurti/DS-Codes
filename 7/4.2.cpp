#include <iostream>
using namespace std;


	class polygon {
		protected:
			int width, height;
		public:
			void setvalues (int a, int b)
				{ width=a; height=b;}
		      };
	class COutput {
		public:
			void output (int i);
                      };
void COutput::output (int i) {
cout << i << endl;
}

	class rectangle: public polygon, public COutput {
		public:
			int area ()
				{ return (width * height); }
			};
	class triangle: public polygon, public COutput {
		public:
			int area ()
			{ return (width * height / 2); }
			};
int main () 
{
	rectangle rect;
	triangle trgl;
	rect.setvalues (2,41);
	trgl.setvalues (4,5);
	rect.output (rect.area());
	trgl.output (trgl.area());
return 0;
}

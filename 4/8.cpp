#include<iostream>

using namespace std;

int main()
{

class date{
 public:
  int day;
  int month;
  int year;
 } dat;

dat.day=25;
dat.month=8;
dat.year=2014;

cout << "Today's date is " << dat.day <<"/" << dat.month <<"/"<< dat.year;
cout << endl;

return 0;
}

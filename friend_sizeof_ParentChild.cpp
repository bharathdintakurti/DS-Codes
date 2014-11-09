#include <iostream>

using namespace std;

class Parent
{
  friend void adhoc(int,int);
  public:
  	int i;
  	Parent()
	{
		i=10;
	}
	int retrieve()
	{
		//cout<<sizeof(this)<<endl;
		return i;
	}
	virtual void print_size()
	{
		cout<<sizeof(this)<<endl;
		cout<<sizeof(*this)<<endl;
	}
}pa;

class Child : public Parent
{
	public:
		int j;
		void print_size()
		{
			cout<<sizeof(this)<<endl;
			cout<<sizeof(*this)<<endl;
		}
}ch;

void adhoc(int a, int b)
{
	a = a+b+pa.i;
	cout<<a<<endl;
}

int main()
{
	
	//pa.print_size();
	//ch.print_size();
	//cout<<sizeof(pa)<<endl;
	//cout<<sizeof(ch)<<endl;
	adhoc(5,6);
	return 0;
}




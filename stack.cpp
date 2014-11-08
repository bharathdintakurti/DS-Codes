#include<iostream>

using namespace std;

class stack{
	
	private:
	  int size;
	  int* sp;
	  int psize;
       public:
 	 
         stack()
	{
	  sp = NULL;
	  psize = 0;
	}
	void createstack()
        {
	cout << "Enter the length of the stack :";
 	cin >> size;
	
	sp = new int[size];
	}

	void push()
	{
	if(psize < size)
		{
		cout << "Enter the element to be pushed :";
	
		cin >> *(sp+psize);
		psize++;
                
		}
	else
		{
		cout << "Unable to push . Stack is full " << endl;
		}
	}

	void pop()
	{
	if(psize > 0)
		{
		psize--;
		cout << "Element popped is :" << *(sp+psize) << endl ;
	        
		}
	else
		{
		cout <<"Unable to pop .Stack is empty" << endl;
		}
	}
	void print()
        {
	int i;
	cout << "Elements of the stack : " << endl;
	for(i =0 ;i < psize; i++)
	  cout << *(sp+i) << endl;
	}
	

};




int main()
{


stack s;
s.createstack();

int ch;
int flag = 0;

while(flag !=1)
{
	cout <<"Press 1 to push. 2 to pop .3 to print stack. 4 to exit :";
	cin >> ch;
	
	switch(ch)
	{
	case 1 : s.push();break;
	case 2 : s.pop();break;
        case 3 : s.print();break;
	case 4 : flag = 1;break;
	default: cout << "Invalid choice" << endl ;
	}

}
return 0;
}


//  Stacks using arrays

#include<iostream>

using namespace std;

class stack
{
	private:
	  int n;
	  int sp;
	  int *st;

	public:
	  stack()
             {
		cout << "Enter the stack size :";
		cin >> n;
        sp = -1;
		st = new int[n];
             }
        void pop()
	     {
		if(sp>-1)

		{ cout << "Element popped is " << *(st+sp) << endl;
		  sp--;}
		else
		{  cout << "Element cannot be popped . The stack is empty .Stack Underflow " << endl; }
	     }
	void push()
	     { if(sp < n)
		 {cout << "Enter the element to be pushed on to the stack :" ;
		  sp++;
		  cin >> *(st+sp);
		 }
		else
		  cout << "Element cannot be pushed. The stack is full .Stack overflow" << endl;
	     }
      void get()
      	    {
		if(sp>-1)

                { cout << "Element on the top of the stack is  " << *(st+sp) << endl;}
                else
                {  cout << "The stack is empty " << endl; }
	    }
     void display()
	   {
		cout << "The elements in the stack (from top of stack) are  :" ;
		int i;
		for(i=sp;i>-1;i--)
			cout << *(st+i) << "   ";
		cout << endl;
	  }
    void isempty()
            {
                if(sp>-1)
                { cout << "The stack is not empty"<< endl;}
                else
                {  cout << "The stack is empty " << endl; }
            }
};




int main()
{

stack s;
int ch;
int flag = 1;
while(flag)

{
cout << " *****STACKS*****" << endl;

cout << "Choose an entry" << endl;
cout << "*******************"<< endl;
cout << " 1. Push  " << endl;
cout << " 2. Pop   " << endl;
cout << " 3. Display"<< endl;
cout << " 4. Get top of stack " << endl;
cout << " 5. Check if stack is empty "<< endl;
cout << " 6. Exit" << endl;

cout << "Enter the choice  :";
cin >> ch;

switch(ch)
{

case 1:s.push();break;
case 2:s.pop();break;
case 3:s.display();break;
case 4:s.get();break;
case 5:s.isempty();break;
case 6:flag = 0;break;

default:cout << "Invalid choice .Try again " << endl;
}

}
return 0;

}

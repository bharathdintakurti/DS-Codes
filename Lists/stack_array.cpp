#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class stack
{
	public:
		int arr[],a,b,n,top=-1;
		stack()
		{
			cout<<"\n\t\tSTACKS USING ARRAYS\n";
			cout<<"\nENTER THE STACK SIZE : ";
			cin>>n;
			int *arr = new int[n];
		}
		void push()
		{
			if(isfull())
			{
				cout<<"\n\tSTACK OVERFLOWS\n";
				return ;
			}
			cout<<"\nENTER THE ELEMENT : ";
			cin>>arr[++top];
			return ;
		}
		void pop()
		{
			if(isempty())
			{
				cout<<"\n\tSTACK UNDERFLOWS\n";
				return ;
			}
			top--;
			return ;
		}
		void display()
		{
			if(isempty())
			{
				cout<<"\n\tSTACK IS EMPTY\n";
				return ;
			}
			cout<<"\nTHE ELEMENTS ARE : ";
			for(int i=0;i<=top;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
		bool isempty()
		{
			if(top==-1)
			{
				return true ;
			}
			return false;

		}
		bool isfull()
		{
			if(top>=(n-1))
			{
				return true;
			}
			return false;

		}
		void peek()
		{
			if(isempty())
			{
				cout<<"\nTHE STACK IS EMPTY\n";
				return ;
			}
			cout<<"\nTHE ELEMENT AT D TOP OF STACK IS : "<<arr[top];
		}
};
int main()
{
	stack s1;
	int x;
	bool a;
	while(1)
	{
		cout <<"\n\n1.PUSH\n2.POP\n3.ISEMPTY\n4.ISFULL\n5.DISPLAY\n6.PEEK\n7.EXIT\nENTER U R CHOICE:";
		cin>>x;
		switch(x)
	    {
		case 1:
                	s1.push();
                 	break;

		case 2:   	s1.pop();
					break;

		case 3:   	a=s1.isempty();
					cout<<"\n"<<a<<"\n";
                	break;

		case 4:   	a=s1.isfull();
					cout<<"\n"<<a<<"\n";
                	break;

		case 5:   	s1.display();
                	break;

		case 6:   	s1.peek();
                	break;
                	
		case 7:  	exit(0);

		default:  cout<<"\ninvalid input..try again\n";
					break;
		}
     }
return 0;
}


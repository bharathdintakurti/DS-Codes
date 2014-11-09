#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;
class queue
{
	public:
		int arr[],a,b,n;
		int front=-1;
		int rear=-1;
		
		queue()
		{
			
			cout<<"\n\t\tQUEUES USING ARRAYS\n";
			cout<<"\nENTER THE QUEUE SIZE : ";
			cin>>n;
			int *arr = new int[n];
		}
		
		void enque()
		{
			if(isfull())
			{
				cout<<"\n\tQueue is full\n";
				return ;
			}
			
			if(isempty())
			{
				front=0;
			}

			rear=(rear+1)%n;
			cout<<"\nENTER THE ELEMENT : ";
			cin>>b;
			arr[rear]=b;
			return ;
		}
		
		void deque()
		{
			if(isempty())
			{
				cout<<"\n\tQueue is Emtpty\n";
				return ;
			}
			
			if(front==rear)
			{
				front=-1;
				rear=-1;
				return ;
			}
			front=(front+1)%n;
			return ;
		}
		
		void display()
		{
			if(isempty())
			{
				cout<<"\n\tQueue is Emtpty\n";
				return ;
			}
			
			cout<<"\nTHE ELEMENTS ARE : ";
			
			for(int i=front;i!=rear;i=(i+1)%n)
			{
				cout<<arr[i]<<" ";
			}
   			cout<<arr[rear]<<" ";
			return ;
		}
		
		bool isempty()
		{
			if((front == -1) && (rear == -1))
			{
				return true ;
			}
			return false;

		}
		
		bool isfull()
		{
			if(front==((rear+1)%n))
			{
				return true;
			}
			return false;
		}
		
};

int main()
{
	queue s1;
	int x;
	bool a;
	while(1)
	{
		cout <<"\n1.QUEUE\n2.DEQUEUE\n3.ISEMPTY\n4.ISFULL\n5.DISPLAY\n6.EXIT\nENTER U R CHOICE:";
		cin>>x;
		
		switch(x)
	    {
		case 1:
                	s1.enque();
                 	break;

		case 2:   	s1.deque();
					break;

		case 3:   	a=s1.isempty();
					cout<<"\n"<<a<<"\n";
                	break;

		case 4:   	a=s1.isfull();
					cout<<"\n"<<a<<"\n";
                	break;

		case 5:   	s1.display();
                	break;

		case 6:  	exit(0);

		default:  cout<<"\ninvalid input..try again\n";
					break;
		}
     }
return 0;
}


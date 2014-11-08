#include<iostream>
#include<iomanip>
#include<cstdlib>


using namespace std;
class node
{
	public:
   	 int info;
   	node *next;
   	node *prev;
};
class Queue
{
    public:
		node *rear;
        node *front;
      	Queue();
        void enque();
        void deque();
        void display();
};
Queue::Queue()
{
  	rear = NULL;
	front = NULL;
}
void Queue::enque()
{
    int data;
    node *temp = new node;
    cout<<"Enter the data to enque: ";
    cin>>data;
    temp->info = data;
    temp->next = NULL;
	temp->prev=NULL;
    if(front == NULL)
	{
        front = temp;
	}
	else
	{
        rear->next = temp;
		temp->prev=rear;
	}
    rear = temp;
}
void Queue::deque()
{
    node *temp = new node;
    if(front == NULL)
	{
        cout<<"\nQueue is Emtpty\n";
	}
	else if(front->next==NULL)
	{
		temp = front;
		cout<<"\nThe data REMOVED is "<<front->info<<"\n";
		front=NULL;
	}
	else
	{
        temp = front;
        front = front->next;
        front->prev=NULL;
        cout<<"\nThe data REMOVED is "<<temp->info<<"\n";
        delete temp;
    }
}
void Queue::display()
{
    node *p = new node;
    p = front;
    if(front == NULL)
	{
        cout<<"\nNothing to Display\n";
    }
	else
	{
        while(p!=NULL)
		{
            cout<<"\n"<<endl<<p->info<<"\n";
            p = p->next;
        }
    }
}

int main()
{
    Queue queue;
    int choice;
    while(1)
	{
	cout<<"Operations on queue using doubly linked lists" << endl;


        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Quit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice)
		{
            case 1:
                queue.enque();
                break;
            case 2:
                queue.deque();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Input. Try again! \n";
                break;
        }
    }
    return 0;
}

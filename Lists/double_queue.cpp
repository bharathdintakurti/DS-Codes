#include<iostream>



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
l    public:
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
    cout<<"Enter the data to enqueued: ";
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
        cout<<"\nQueue is Empty\n";
	}
	else if(front->next==NULL)
	{
		temp = front;
		cout<<"\nThe data dequeued is "<< front->info <<"\n";
		front=NULL;
	}
	else
	{
        temp = front;
        front = front->next;
        front->prev=NULL;
        cout<<"\nThe data dequeued is "<<temp->info<<"\n";
        delete temp;
    }
}
void Queue::display()
{
    node *p = new node;
    p = front;
    if(front == NULL)
	{
        cout<<"\nQueue is empty\n";
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
    int flag =0;
    while(flag!=1)
	{
	cout<<"************Operations on Queues********" << endl;


        cout<<"\n\t1.Enqueue\n\t2.Dequeue\n\t3.Display\n\t4.Quit";
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
                flag =1;
                break;
            default:
                cout<<"\nInvalid Input. Try again! \n";
                break;
        }
    }
    return 0;
}

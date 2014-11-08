#include<iostream>

using namespace std;
struct node
{

   	int info;
   	node *next;
};
class Queue
{
    public:
	    node *rear;
        node *front;
      	Queue()
      	{
      		cout<<"\n*************Operations on Queues*****************\n";
  		rear = NULL;
		front = NULL;
      	}
        void enque();
        void deque();
        void display();
};
void Queue::enque()
{
    int data;
    node *temp = new node;
    cout<<"\n\nEnter the data to be enqueued: ";
    cin>>data;
    temp->info = data;
    temp->next = NULL;
    if(front == NULL)
	{
        front = temp;
	}
	else
	{
        rear->next = temp;
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
		cout<<"\n\nThe data dequeued is "<<front->info<<"\n";
		front=NULL;
	}
	else
	{
        temp = front;
        front = front->next;
        cout<<"\n\nThe data dequeued is "<<temp->info<<"\n";
        delete temp;
    }
}
void Queue::display()
{
    node *p = new node;
    p = front;
    if(front == NULL)
	{
        cout<<"\n\nQueue is empty\n";
    }
	else
	{
		cout<<"\n\nThe elements in the Queue : \n";
        while(p!=NULL)
		{
            cout<< p->info<<" ";
            p = p->next;
        }
    }
    cout<<"\n";
}

int main()
{
    Queue queue;
    int choice;
    int flag=0;
    while(flag!=1)
	{

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
                flag = 1;
                break;
            default:
                cout<<"\nInvalid Input. Try again! \n";
                break;
        }
    }
    return 0;
}

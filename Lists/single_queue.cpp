#include<iostream>
#include<iomanip>

#include<cstdlib>

using namespace std;
class node
{
	public:
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
      		cout<<"\n\t\t QUEUES USING SINGLE LINKED LIST\n";
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
    cout<<"\n\nEnter the data to enque: ";
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
    node *temp = new node;          // removing the elements
    if(front == NULL)
	{
        cout<<"\nQueue is Empty\n";
	}
	else if(front->next==NULL)
	{
		temp = front;
		cout<<"\n\nThe data REMOVED is "<<front->info<<"\n";
		front=NULL;
	}
	else
	{
        temp = front;
        front = front->next;
        cout<<"\n\nThe data REMOVED is "<<temp->info<<"\n";
        delete temp;
    }
}
void Queue::display()   
{
    node *p = new node;
    p = front;
    if(front == NULL)
	{
        cout<<"\n\nNothing to Display\n";
    }
	else
	{
		cout<<"\n\nTHE ELEMENTS ARE : ";
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
    while(1)
	{
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

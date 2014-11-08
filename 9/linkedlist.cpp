#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

class node{
	public:
		int info;
		struct node *next;
	  } *start;


class queue{
	
	private:
		int pres;
	public:
		node * create_node(int);
		void enq();
		void deq();
		//void search();
		void display();
		//void isempty();
		//void chsize();

		queue()
		{
			start = NULL ;
			pres = 0;
		}
	};

int main()
{

int ch,nodes,element,i;

int flag=0;

queue q;

start = NULL;

while(flag!=1)

{

        cout<<"\n\n\n\nOperations on a queue\n\n\n\n" ;

        cout<<"1.Enqueue"<<endl;
	cout<<"2.Dequeue"<<endl;

	cout<<"3.Search Element"<< endl;
	cout<<"4.Display Queue"<<endl;
	//cout<<"5.Change the size of the queue (Default value is 10)" << endl;
	cout<<"6.To check whether queue is empty" << endl;
        cout<<"7.Exit "<<endl;

        cout<<"Enter your choice : ";

        cin>>ch;

        switch(ch)
	{
	case 1:
		cout << "Enqueuing..."<< endl;
		q.enq();
		cout << endl;
		break;
	case 2:
                cout << "Dequeuing..."<< endl;
                q.deq();
		cout << endl;
                break;
	case 3:
                cout << "Search:   "<< endl;
                //q.search();
		cout << endl;
                break;
	case 4:
                cout << "Displaying..."<< endl;
                q.display();
		cout << endl;
                break;
	case 5:
		//q.chsize();
		cout << endl;
		break;

	case 6:
                //q.isempty();
		cout << endl;
                break;

	case 7:
		cout << "Exiting............";
		flag = 1;
		break;

	default:
		cout << "Invalid Choice.Try again " << endl;

	}
	
}
return 0;
}


node *queue::create_node(int value)

{

   struct node *temp;
   temp = new(struct node); 
   /*if (temp == NULL)
   {

     cout<<"Memory not allocated "<<endl;
     return 0;

    }
    else
    {*/
      temp->info = value;
      temp->next = NULL;
      pres++;     
      return temp;
    //}

}

     

void queue::enq()

{

        int value;
	cout<<"Enter the value to be enqueued: ";
 	cin>>value;

        struct node *temp, *s;

        temp = create_node(value);

        s = start;

        while (s->next != NULL)
	{         
	 s = s->next;        
	}

        temp->next = NULL;
	s->next = temp;

        cout<<"Element Inserted at last"<<endl;  

}



void queue::deq()

{

   int pos, i, counter = 0;

   if (start == NULL)
   {

            cout<<"List is empty"<<endl;
	    return;
   }

    pos = pres;
    struct node *s, *ptr;
    s = start;

    if (pos == 1)

    {

          start = s->next;
    }

    else

    {

     while (s != NULL)

            {

                 s = s->next;
		 counter++;  

             }

   if (pos > 0 && pos <= counter)
    {

        s = start;
	for (i = 1;i < pos;i++)

        {

           ptr = s;
	   s = s->next;

        }

        ptr->next = s->next;

    }

   else

    {

     cout<<"Cannot Dequeue"<<endl;

    }

    free(s);

    cout<<"Element Dequeued"<<endl;

     }

    }


void queue::display()

    {

        struct node *temp;

        if (start == NULL)

        {

            cout<<"The List is Empty"<<endl;

            return;

        }

        temp = start;

        cout<<"Elements of list are: "<<endl;

        while (temp != NULL)

        {

            cout<<temp->info<<"->";

            temp = temp->next;

        }

        cout<<"NULL"<<endl;

    }

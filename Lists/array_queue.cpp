
#include<iostream>

using namespace std;

class queue
{
	private:
	  int n;
	  int qs;
	  int qe;
	  int *q;
      int size;

	public:
	  queue()
             {
		cout << "Enter the queue size :";
		cin >> n;
	        qs = 0;
		qe = 0;
		size = 0;
		q = new int[n];
             }
        void dequeue()
	     {
		if(size > 0)

		{ cout << "Element dequeued is " << *(q+qs) << endl;
		  size--;
		  qs++;}
		else
		{  cout << "Element cannot be dequeued . The queue is empty" << endl; }
	     }
	void enqueue()
	     { if(size < n)
		 {cout << "Enter the element to be enqueued on to the stack :" ;
		  qe++;
		  size++;
		  cin >> *(q+qe);
		 }
		else
		  cout << "Element cannot be enqueued. The queue is full" << endl;
	     }
      void get()
      	    {
		if(size>0)

                { cout << "Element on the first of the queue is  " << *(q+qs+1) << endl;}
                else
                {  cout << "The queue is empty " << endl; }
	    }
     void display()
	   {
		cout << "The elements in the queue  are  :" ;
		int i;
		for(i=qs+1;i<=qe;i++)
			cout << *(q+i) << "   ";
		cout << endl;
	  }
    void isempty()
            {
                if(size > 0)
                { cout << "The queue is not empty"<< endl;}
                else
                {  cout << "The queue is empty " << endl; }
            }
};




int main()
{

queue s;
int ch;
int flag = 1;
while(flag)

{
cout << " *****QUEUES*****" << endl;

cout << "Choose an entry" << endl;
cout << "*******************"<< endl;
cout << " 1. Enqueue  " << endl;
cout << " 2. Dequeue   " << endl;
cout << " 3. Display"<< endl;
cout << " 4. Get first of queue " << endl;
cout << " 5. Check if queue is empty "<< endl;
cout << " 6. Exit" << endl;

cout << "Enter the choice  :";
cin >> ch;

switch(ch)
{

case 1:s.enqueue();break;
case 2:s.dequeue();break;
case 3:s.display();break;
case 4:s.get();break;
case 5:s.isempty();break;
case 6:flag = 0;break;

default:cout << "Invalid choice .Try again " << endl;
}

}
return 0;

}

#include<iostream>
using namespace std;
class node
{
      public:
             node *next;
             int data;
};

int n;

class stack : public node
{
             node *head;
             int tos,x;
      	public:
             stack()
               {
		            cout<<"\n\t\tOperations on Stacks\n";
                    tos=-1;
                    cout<<"\n\nEnter the size of the stack : ";
                    cin>>n;
               }
             void push()
              {
              	if(tos < 0 )
                  {
                     cout <<"\n\nEnter a element to push: ";
                     cin >> x;
                     head =new node;
                     head->next=NULL;
                     head->data=x;
                     tos ++;
                   }
             else
                  {
                   	 node *temp,*temp1;
                     temp=head;
                     if(tos >= (n-1))
                     	{
                      		cout <<"\n\nInvalid Operation.Stack Overflow\n";
                        	return;
                        }
                        cout <<"\n\nEnter an element to push: ";
                    	cin >> x;
                     while(temp->next != NULL)
                          temp=temp->next;
                     temp1=new node;
                     temp->next=temp1;
                     temp1->next=NULL;
                     temp1->data=x;
                     tos++;
                   }
            }
             void display()
               {
                  node *temp;
                  temp=head;
                  if (tos < 0)
                    {
                        cout <<"\nStack is empty\n";
                        return;
                    }
                    cout<<"\n\nThe elements in stack are : ";
                  while(temp != NULL)
                     {
                        cout <<temp->data<< " ";
                        temp=temp->next;
                     }
                     cout<<"\n";
               }
              void pop()
                {
                   node *temp;
                   temp=head;
                   if( tos < 0 )
                    {
                       cout <<"\nInvalid Operation.Stack under-flow\n";
                       return;
                    }
					if(tos==0)
					{
						cout<<"\n\nThe popped out element is :"<<temp->data;
						temp->next=NULL;
						tos--;
						return ;
					}
				   if(tos>0)
				   {
				   		while(temp->next->next!=NULL)
                   		{
                    	 	temp=temp->next;
                    	}
                   		 if(temp->next->next==NULL)
                    	{
							cout<<"\n\nThe popped out element is :"<<temp->next->data;
                   		}
                    	temp->next=NULL;
                    	tos--;
                    	 return ;
                   }

                }
};


int main()
{
	stack s1;
	int x;
	int flag=0;
	while(flag!=1)
	{
	    cout << "MENU\n";
		cout <<"\n1.Push\n2.Pop\n3.Display\n4.Exit\n \tEnter your choice:";
		cin>>x;
		switch(x)
	    {
		case 1:
                s1.push();
                break;

		case 2:  s1.pop();
			     break;

		case 3:  s1.display();
                	break;

		case 4:  flag =1;

		default:  cout<<"\nInvalid input.Try again\n";
			break;
		}
     }
return 0;
}

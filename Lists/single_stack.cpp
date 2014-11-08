#include<iostream>

#include<cstdlib>

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
		    cout<<"\n\t\tSTACKS USING SINGLE LINKED LISTS\n";
                    tos=-1;
                    cout<<"\n\nENTER THE STACK SIZE : ";
                    cin>>n;
               }
             void push()
              {
              	if(tos < 0 )
                  {
                  	cout <<"\n\nenter a element : ";
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
                      		cout <<"\n\nstack over flow\n";
                        	return;
                        }
                     cout <<"\n\nenter a element : ";
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
                        cout <<"\nSTACK IS EMPTY\n";
                        return;
                    }
                    cout<<"\n\nThe elements are : ";
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
                       cout <<"\nStack under flow\n";
                       return;
                    }
					if(tos==0)
					{
						cout<<"\n\nThe removed element is :"<<temp->data;
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
							cout<<"\n\nthe removed element is :"<<temp->next->data;
                   		}
                    	temp->next=NULL;
                    	tos--;
                    	 return ;
                   }
                    
                }
};
main()
{
	stack s1;
	int x;
	while(1)
	{
		cout <<"\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n enter ur choice:";
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
                	
		case 4:  exit(0);
		
		default:  cout<<"\ninvalid input..try again\n";
			break;
		}
     }
return 0;
}

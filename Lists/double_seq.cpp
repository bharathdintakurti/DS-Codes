#include<iostream>

using namespace std;
    class node
    {
	public:
        int info;
        node *next;
        node *prev;
    }*start,*last;
    
	class double_list
    {

        public:

            node* create_node(int);

            void insert_begin();

            void insert_pos();

            void insert_last();

            void delete_pos();

            void ele_atRank();

            void replace();

            void search();

            void update();

            void display();

            void rev_display();

            double_list()

            {

                start = NULL;

            }

    };

    node *double_list::create_node(int value)  	

    {

       	node *temp, *s;

        temp = new(struct node);

        if (temp == NULL)

        {

            cout<<"\nMemory not allocated "<<endl;

            return 0;

        }

        else

        {

            temp->info = value;

            temp->prev = NULL;

            temp->next = NULL;

            return temp;

        }

    }

    void double_list::insert_begin()    

    {

        int value;

        cout<<"\nEnter the value to be inserted: ";

        cin>>value;

        node *temp, *p;

        temp = create_node(value);

        if (start == NULL)

        {

            start = temp;

            start->next = NULL;

			start->prev = NULL;

			last = temp;

        }

        else

        {

            p = start;

            start = temp;

            start->prev = NULL;

            start->next = p;



        }

        cout<<"\nElement Inserted at beginning"<<endl;

    }


    void double_list::insert_last()     

    {

        int value;

        cout<<"\nEnter the value to be inserted: ";

        cin>>value;

        node *temp, *s;

        temp = create_node(value);

        s = start;

        while (s->next != NULL)

        {

            s = s->next;

        }

        temp->next = NULL;

        s->next = temp;

        temp->prev=s;

        last = temp;

        cout<<"\nElement Inserted at last"<<endl;

    }



    void double_list::insert_pos()   

    {

        int value, pos, counter = 0;

        cout<<"\nEnter the value to be inserted: ";

        cin>>value;

       	node *temp, *s, *ptr;

        temp = create_node(value);

        cout<<"\nEnter the postion at which node to be inserted: ";

        cin>>pos;

        int i;

        s = start;

        while (s != NULL)

        {

            s = s->next;

            counter++;

        }

        if (pos == 1)

        {

            if (start == NULL)

            {

                start = temp;

                start->prev = NULL;

                start->next = NULL;

                 last = temp;

            }

            else

            {

                ptr = start;

                start = temp;

                start->prev = NULL;

                start->next = ptr;

            }

        }

        else if (pos > 1  && pos <= counter)

        {

            s = start;

            for (i = 1; i < pos; i++)

            {

                ptr = s;

                s = s->next;

            }

            ptr->next = temp;

			temp->prev = ptr;

			s->prev=temp;

            temp->next = s;

            if(pos==counter)
            {
            	last = s;
            }

        }

        else

        {

            cout<<"\nPositon out of range"<<endl;

        }

    }


void double_list::delete_pos()     
    {

        int pos, i, counter = 0;

        if (start == NULL)

        {

            cout<<"\nList is empty"<<endl;

            return;

        }

        cout<<"\nEnter the position of value to be deleted: ";

        cin>>pos;

        node *s, *ptr;

        s = start;

        if (pos == 1)

        {

            start = s->next;

			start->prev = NULL;

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

                s->next->prev = NULL;

            }

            if(pos==counter)
            {
            	last = s;
            }

            else

            {

                cout<<"\nPosition out of range"<<endl;

            }

            

            cout<<"\nElement Deleted"<<endl;

        }

    }

    void double_list::update()     

    {

        int value, pos, i;

        if (start == NULL)

        {

            cout<<"\nList is empty"<<endl;

            return;

        }

        cout<<"\nEnter the node postion to be updated: ";

        cin>>pos;

        cout<<"\nEnter the new value: ";

        cin>>value;

        node *s, *ptr;

        s = start;

        if (pos == 1)

        {

            start->info = value;

        }

        else

        {

            for (i = 0;i < pos - 1;i++)

            {

                if (s == NULL)

                {

                    cout<<"\nThere are less than "<<pos<<" elements";

                    return;

                }

                s = s->next;

            }

            s->info = value;

        }

        cout<<"\nNode Updated"<<endl;

    }


    void double_list::search()         

    {

        int value, pos = 0;

        bool flag = false;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"\nEnter the value to be searched: ";

        cin>>value;

        node *s;

        s = start;

        while (s != NULL)

        {

            pos++;

            if (s->info == value)

            {

                flag = true;

                cout<<"\nElement "<<value<<" is found at position "<<pos<<endl;

            }

            s = s->next;

        }

        if (!flag)

            cout<<"\nElement "<<value<<" not found in the list"<<endl;

    }
    
    void double_list::ele_atRank()         

    {

        int value, pos = 0;

        bool flag = false;

        if (start == NULL)

        {

            cout<<"\nList is empty"<<endl;

            return;

        }

        cout<<"\nEnter the value to be find out the rank: ";

        cin>>value;

        node *s;

        s = start;

        while (s != NULL)

        {

            pos++;

            if (s->info == value)

            {

                flag = true;

                cout<<"\nElement "<<value<<" is found at rank "<<pos<<endl;

            }

            s = s->next;

        }

        if (!flag)

            cout<<"\nElement "<<value<<" not found in the list"<<endl;

    }



void double_list::display()            

    {
		 node *temp;

        if (start == NULL)

        {

            cout<<"\nThe List is Empty"<<endl;

            return;

        }

        temp = start;

        cout<<"\nElements of list are: "<<endl;

        while (temp != NULL)

        {

            cout<<temp->info<<"->";

            temp = temp->next;

        }

        cout<<"NULL"<<endl;

    }


    void double_list::rev_display()            

    {

        node *temp,*s,*p;

        if (start == NULL)

        {

            cout<<"\nThe List is Empty"<<endl;

            return;

        }

        s = start;

        p=last;
        
        cout<<"\n\tREVERSE ORDER\nElements of list are: ";

        while (p != start)

        {

            cout<<p->info<<"->";

            p = p -> prev;

        }

          cout<<start->info<<"->";

        cout<<"NULL"<<endl;

    }


int main()
{
	int choice, nodes, element, position, i;

        double_list sl;
		
		int flag = 1;

        start = NULL;

        while (flag)

        {

            cout<<endl<<"---------------------------------"<<endl;

            cout<<endl<<" SEQUENCES"<<endl;

            cout<<endl<<"---------------------------------"<<endl;
            
            

            


            

            cout<<"1.Insert Node at beginning"<<endl;

            cout<<"2.Insert node at last"<<endl;

            cout<<"3.Insert node at position"<<endl;

            cout<<"4.Delete a Particular Node"<<endl;

            cout<<"5.Update Node Value"<<endl;

            cout<<"6.Search Element"<<endl;

            cout<<"7.Display Linked List"<<endl;

            cout<<"8.Reverse display of the list" << endl;
			
			cout<<"9.Insert element at rank"<<endl;

            cout<<"10.Delete a Particular rank"<<endl;

            cout<<"11.Replace Value at rank"<<endl;

            cout<<"12.Find Element at Rank "<<endl;

            cout<<"13.Exit "<<endl;

            cout<<"Enter your choice : ";

            cin>>choice;

            switch(choice)

            {

            case 1:

                sl.insert_begin();

                cout<<endl;

                break;

            case 2:

               
                sl.insert_last();

                cout<<endl;

                break;

            case 3:

               
                sl.insert_pos();

                cout<<endl;

                break;

            case 4:

                
                sl.delete_pos();

                break;

            case 5:


                sl.update();

                cout<<endl;

                break;

            case 6:

               
                sl.search();

                cout<<endl;

                break;

            case 7:

                
                sl.display();

                cout<<endl;

                break;

            case 8:


                sl.rev_display();

                cout<<endl;

                break;
                
        	case 9:


                sl.insert_pos();

                cout<<endl;

                break;
                
            case 10:


                sl.delete_pos();

                break;

            case 11:


                sl.update();

                cout<<endl;

                break;

            case 12:


                sl.ele_atRank();

                cout<<endl;

                break;


            case 13:

                cout<<"Exiting..."<<endl;

                flag = 0;

                break;

            default:

                cout<<"Wrong choice"<<endl;

            }

        }
return 0;
}


#include<iostream>

using namespace std;
    class node
    {
	public:
        int info;
        node *next;
        node *prev;
    }*start;
    class double_list
    {

        public:

            node* create_node(int);

            void insert_begin();

            void insert_pos();

            void insert_last();

            void remove_pos();

            void ele_atRank();

            void replace();

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
            start->prev = NULL;

            start->next = NULL;

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

        cout<<"\nElement Inserted at last"<<endl;

    }



    void double_list::insert_pos()  
    {

        int value, pos, counter = 0;

        cout<<"\nEnter the value to be inserted: ";

        cin>>value;

        node *temp, *s, *ptr;

        temp = create_node(value);

        cout<<"\nEnter the rank at which value to be inserted: ";

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

            temp->next = s;

        }

        else

        {

            cout<<"\nPositon out of range"<<endl;

        }

    }


void double_list::remove_pos()     
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

                cout<<"\nPosition out of range"<<endl;

            }

            

            cout<<"\nElement Deleted"<<endl;

        }

    }

    void double_list::replace()    

    {

        int value, pos, i;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"\nEnter the rank to be replaced : ";

        cin>>pos;

        cout<<"\nEnter the new value : ";

        cin>>value;

        struct node *s, *ptr;

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

        cout<<"\nelement replaced"<<endl;

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

        cout<<"\n\nElements of list are: ";

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
        
        while(s->next != NULL)
        {
        	s=s->next;
        }
        p = s;

        cout<<"\n\tREVERSE ORDER\nElements of list are: ";

        while (s != NULL)

        {

            cout<<s->info<<"->";

            s = s -> prev;

        }
        
        cout<<start->info<<"->";

        cout<<"NULL"<<endl;

    }


int main()
{
	int choice, nodes, element, position, i;

        double_list sl;
	
	int flag =1;

        start = NULL;

        while (flag)

        {

            cout<<endl<<"---------------------------------"<<endl;

            cout<<endl<<"       Position ADT      "<<endl;

            cout<<endl<<"---------------------------------"<<endl;

            cout<<"1.Insert element at beginning"<<endl;

            cout<<"2.Insert element at last"<<endl;

			

            cout<<"3.Insert element at rank"<<endl;

            cout<<"4.Delete a Particular rank"<<endl;

            cout<<"5.replace Value at rank"<<endl;

            cout<<"6.Find Element at Rank "<<endl;

            cout<<"7.Display List"<<endl;
            
            cout<<"8.Reverse display of the list\n";

            cout<<"9.Exit "<<endl;

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


                sl.remove_pos();

                break;

            case 5:


                sl.replace();

                cout<<endl;

                break;

            case 6:


                sl.ele_atRank();

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

                cout<<"\tExiting..."<<endl;

                flag = 0;

                break;

            default:

                cout<<"\tWrong choice"<<endl;

            }

        }
return 0;
}


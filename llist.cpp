#include<iostream>

using namespace std;


struct Node{

	int info;
	Node* next;

} * start;


class list{
	public:

            Node* create_node(int);

            void insert_begin();

            void insert_pos();

            void insert_last();

            void delete_pos();

            void sort();

            void search();

            void update();

            void reverse();

            void display();

            list()

		{
		   start = NULL;
		}
	};


Node * list::create_node(int value)

    {

        struct Node *temp, *s;

        temp = new (struct Node);

        if (temp == NULL)

        {

            cout<<"Memory not allocated "<<endl;

            return 0;

        }

        else

        {

            temp->info = value;

            temp->next = NULL;

            return temp;

        }

    }


void list::insert_begin()

    {

        int value;

        cout<<"Enter the value to be inserted: ";

        cin>>value;

        struct Node *temp, *p;

        temp = create_node(value);

        if (start == NULL)

        {

            start = temp;

            start->next = NULL;

        }

        else

        {

            p = start;

            start = temp;

            start->next = p;

        }

        cout<<"Element Inserted at beginning"<<endl;

    }


void list::insert_last()

    {

        int value;

        cout<<"Enter the value to be inserted: ";

        cin>>value;

        struct Node *temp, *s;

        temp = create_node(value);

        s = start;

        while (s->next != NULL)

        {

            s = s->next;

        }



        s->next = temp;

        cout<<"Element Inserted at last"<<endl;

    }




void list::insert_pos()

    {

        int value, pos, counter = 0;

        cout<<"Enter the value to be inserted: ";

        cin>>value;

        struct Node *temp, *s, *ptr;

        temp = create_node(value);

        cout<<"Enter the postion at which node to be inserted: ";

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

                start->next = NULL;

            }

            else

            {

                ptr = start;

                start = temp;

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

            cout<<"Positon out of range"<<endl;

        }

    }


 void list::sort()

    {

        struct Node *ptr, *s;

        int value;

        if (start == NULL)

        {

            cout<<"The List is empty"<<endl;

            return;

        }

        ptr = start;

        while (ptr != NULL)

        {

            for (s = ptr->next;s !=NULL;s = s->next)

            {

                if (ptr->info > s->info)

                {

                    value = ptr->info;

                    ptr->info = s->info;

                    s->info = value;

                }

            }

            ptr = ptr->next;

        }

    }



void list::delete_pos()

    {

        int pos, i, counter = 0;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the position of value to be deleted: ";

        cin>>pos;

        struct Node *s, *ptr;

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

                cout<<"Position out of range"<<endl;

            }



            cout<<"Element Deleted"<<endl;

        }

    }


void list::update()

    {

        int value, pos, i;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the node postion to be updated: ";

        cin >> pos;

        cout << "Enter the new value: ";

        cin>>value;

        struct Node *s, *ptr;

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

                    cout<<"There are less than "<<pos<<" elements";

                    return;

                }

                s = s->next;

            }

            s->info = value;

        }

        cout<<"Node Updated"<<endl;

    }



void list::search()

    {

        int value, pos = 0;

        bool flag = false;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        cout<<"Enter the value to be searched: ";

        cin>>value;

        struct Node *s;

        s = start;

        while (s != NULL)

        {

            pos++;

            if (s->info == value)

            {

                flag = true;

                cout<<"Element "<<value<<" is found at position "<<pos<<endl;

            }

            s = s->next;

        }

        if (!flag)

            cout<<"Element "<<value<<" not found in the list"<<endl;

    }


void list::reverse()

    {

        struct Node *ptr1, *ptr2, *ptr3;

        if (start == NULL)

        {

            cout<<"List is empty"<<endl;

            return;

        }

        if (start->next == NULL)

        {

            return;

        }

        ptr1 = start;

        ptr2 = ptr1->next;

        ptr3 = ptr2->next;

        ptr1->next = NULL;

        ptr2->next = ptr1;

        while (ptr3 != NULL)

        {

            ptr1 = ptr2;

            ptr2 = ptr3;

            ptr3 = ptr3->next;

            ptr2->next = ptr1;

        }

        start = ptr2;

    }


 void list::display()

    {

        struct Node *temp;

        if (start == NULL)

        {

            cout<<"The List is Empty"<<endl;

            return;

        }

        temp = start;

        cout<<"Elements of list are: "<<endl;

        while (temp != NULL)

        {

            cout << temp->info << "->";

            temp = temp->next;

        }

        cout<<"NULL"<<endl;

    }

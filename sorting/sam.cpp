
    #include<iostream>

    #include<cstdio>

    #include<cstdlib>

    using namespace std;

    class node

    {

	public:

        	int info;

        	struct node *next;

    } *start;


    class single_llist

    {

        public:

	  node* create_node(int);

	  void insert_begin();

            void insert_pos();

            void insert_last(); 

            void delete_pos();

            void sort();

            void search();

            void update();

            void reverse();

            void display();

            single_llist() 

            {

                start = NULL;

            }

    };

     

    void main()

    {

        int choice, nodes, element, position, i;

        single_llist sl;

        start = NULL;

        while (1)

        {

            cout<<endl<<"­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­"<<endl;

            cout<<endl<<"Operations on singly linked list"<<endl;

            cout<<endl<<"­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­­"<<endl;

            cout<<"1.Insert Node at beginning"<<endl;

            cout<<"2.Insert node at last"<<endl;

            cout<<"3.Insert node at position"<<endl;

            cout<<"4.Sort Link List"<<endl;

            cout<<"5.Delete a Particular Node"<<endl;

            cout<<"6.Update Node Value"<<endl;

            cout<<"7.Search Element"<<endl;

            cout<<"8.Display Linked List"<<endl;

            cout<<"9.Reverse Linked List "<<endl;

            cout<<"10.Exit "<<endl;

            cout<<"Enter your choice : ";

            cin>>choice;

            switch(choice)

            {

            case 1:

  		cout<<"Inserting Node at Beginning: " <<endl;

                sl.insert_begin();

                cout<<endl;

                break;

            case 2:

                cout<<"Inserting Node at Last: "<<endl;

                sl.insert_last();

                cout<<endl;

                break;

            case 3:

                cout<<"Inserting Node at a given position:"<<endl;

                sl.insert_pos();

                cout<<endl;

                break;

            case 4:

                cout<<"Sort Link List: "<<endl;

                sl.sort();

                cout<<endl;

                break;

            case 5:

                cout<<"Delete a particular node: "<<endl;

  		sl.delete_pos();

  		break;

            case 6:

                cout<<"Update Node Value:"<<endl;  

                sl.update();

                cout<<endl;

                break;

            case 7:

                cout<<"Search element in Link List: "<<endl;

                sl.search();

                cout<<endl;

                break;

            case 8:

                cout<<"Display elements of link list"<<endl;

                sl.display();

                cout<<endl;

                break;

            case 9:

                cout<<"Reverse elements of Link List"<<endl;

                sl.reverse();

                cout<<endl;

  		break;

  	case 10:

                cout<<"Exiting..."<<endl;

                exit(1);

                break;  

            default:

                cout<<"Wrong choice"<<endl;

            }

        }

    }

     

    

    node *single_llist::create_node(int value)

    {

        struct node *temp, *s;

        temp = new(struct node); 

        if (temp == NULL)

        {

            cout<<"Memory not allocated "<<endl;

            return 0;

        }

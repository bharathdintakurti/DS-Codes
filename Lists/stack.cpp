    #include<iostream>
    #include<cstdio>
    #include<cstdlib>

    using namespace std;

class node{
   public:
        int info;

        struct node *next;

    }*start;

class stack{

  private:
        int size;
  public:

        node* create_node(int);

        void create();

        void push();

       // void pop();

        void search();

        void update();

        void display();

        stack()

        {

            start = NULL;

        }

    };


  int main()

    {

        int choice, nodes, element, position, i;

        stack sl;

        start = NULL;

        while (1)

        {

            cout<<endl<<"---------------------------------"<<endl;

            cout<<endl<<"Operations on a Stack"<<endl;

            cout<<endl<<"---------------------------------"<<endl;

            cout<<"1.Create a stack"<<endl;

            cout<<"2.Push an element on the stack"<<endl;

            cout<<"3.Pop an element from the stack"<<endl;

            cout<<"4.Search Element"<<endl;

            cout<<"5.Display Stack"<<endl;

            cout<<"6.Exit "<<endl;

            cout<<"Enter your choice : ";

            cin>>choice;

            switch(choice)

            {

            case 1:

                cout<<"Creating  Stack ....."<<endl;

                sl.create();

                cout<<endl;

                break;

            case 2:
                cout<<"Pushing an element on the stack ....... "<<endl;

                sl.push();

                cout<<endl;

                break;

            case 3:
                cout<<"Popping an element from the stack ........ "<<endl;

              //  sl.pop();

                cout<<endl;

                break;
            case 4:
                cout<<"Displaying stack........ "<<endl;

                sl.display();

                cout<<endl;

                break;



            }
        }


 return 0;
}


void stack::create()
{

    cout << "Enter the size of the stack :";
    cin >> size;

    start = NULL;

}






node * stack ::create_node(int value)

    {

        struct node *temp, *s;

        temp = new(struct node);

        if (temp == NULL || size == 0)

        {
            start++ ;
            cout<<"Stack Full.Memory not allocated "<<endl;



        }

        else

        {

            size--;

            temp->info = value;

            temp->next = NULL;

            cout<<"Element pushed on to the stack"<<endl;

            return temp;

        }

}


void stack::push()

    {

        int value;

        cout<<"Enter the value to be inserted: ";

        cin>>value;

        struct node *temp, *p;

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

}

void stack::display(){


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

# include <iostream>

using namespace std;



 class Node
 {
    public:
       int data;

       Node* Next;
 };


# define MAX_ENTRIES  25

 Node* HashTable[MAX_ENTRIES]={NULL};
 Node* Top[MAX_ENTRIES]={NULL};



 const int generate_hash_key(const int data)
 {
    return (data%MAX_ENTRIES);
 }



 void insert_data( )
 {
    int data;


    cout<<"\t Enter a value : ";
    cin>>data;

    int index=generate_hash_key(data);

    Node* Entry=new Node;

    if(!Entry)
    {
       cout<<"Fatal Error : Unable to allocate memory"<<endl;

       return;
    }

    if(HashTable[index]==NULL)
    {
       Entry->data=data;
       Entry->Next=NULL;
       HashTable[index]=Entry;
       Top[index]=Entry;
    }

    else
    {
       Entry->data=data;
       Entry->Next=NULL;
       Top[index]->Next=Entry;
       Top[index]=Entry;
    }


 }


 void print_data( )
 {


    cout<<"\n\n\t *****  HashTable & Data  *****\n"<<endl;

    Node* Print;

    for(int index=0;index<MAX_ENTRIES;index++)
    {
       if(index<10)
	  cout<<"\t HashTable[0"<<index<<"] : ";

       else
	  cout<<"\t HashTable["<<index<<"] : ";

       Print=HashTable[index];

       if(Print!=NULL)
       {
	  while(Print!=NULL)
	  {
	     cout<<Print->data;

	     Print=Print->Next;

	     if(Print!=NULL)
		cout<<" , ";
	  }

	  cout<<endl;
       }

       else
	  cout<<"-"<<endl;
    }


 }


 void search_data( )
 {
    int data;

    cout<<"\n\n\n\t *****  Search an Element  *****\n"<<endl;
    cout<<"\t Enter a value : ";
    cin>>data;

    int flag=0;
    int index=generate_hash_key(data);

    Node* Print=HashTable[index];

    if(Print!=NULL)
    {
       while(Print!=NULL)
       {
	  if(Print->data==data)
	     flag++;

	  Print=Print->Next;
       }

       if(flag)
	  cout<<"\n\n\t ***  The Search Element is found "<<flag<<" times.";
    }

    if(!flag)
       cout<<"\n\n\t ***  The Search Element is not found."<<endl;


 }



int main( )
 {
    int Key;

    do
    {

       cout<<"Implementation of Hashing Using Chaining"<<endl;



       cout <<"\n\n********MENU*********" << endl;
       cout<<"1.Insert an Element"<<endl;


       cout<<"2.Print the HashTable & Data"<<endl;


       cout<<"3.Search an Element"<<endl;


       cout<<"4.Exit"<<endl;



       cout<<"Enter your Choice : ";

       cin >>Key;

       if(Key == 1)
	  break;

       else if(Key == 2)
	  insert_data( );

       else if(Key == 3)
	  print_data( );

       else if(Key == 4)
	  search_data( );

       else
	  cout << "Invalid Entry Try Again";
    }
    while(1);
 }


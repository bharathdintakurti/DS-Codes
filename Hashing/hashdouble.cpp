#include <iostream>

using namespace std;

const int CAPACITY = 50;

struct rec
{
       int key;
       int data;
};


class Table
{
public:
   Table( );
   void insert( const rec& entry );
   void find( int key, bool& found, rec& result ) const;
   int size( ) const;
private:
   int hash( int key ) const;
   int doublehash(int key ) const;
   
   void findIndex( int key, bool& found, int& i ) const;
   rec data[CAPACITY];
   int used;
};

Table::Table( )
{
   used = 0;
   for ( int i = 0; i < CAPACITY; i++ )
      data[i].key = -1;
}

void Table::insert( const rec& entry )
{
   bool alreadyThere;
   int index;

  
   findIndex( entry.key, alreadyThere, index );
   if( !alreadyThere )
   {
     
      used++;
   }
   data[index] = entry;
}


int Table::hash( int key ) const
{
   return key % CAPACITY;
}

int Table::doublehash(int key ) const
{

  return (key-8) % (CAPACITY/2);

}

int Table::size( ) const
{
   return used;
}

void Table::findIndex( int key, bool& found, int& i ) const
{
   int count = 0;
   int offset; 

   i = hash( key );
   while ( count < CAPACITY && data[i].key != -1 && data[i].key != key )
   {

      offset = doublehash(key);
      count++;
      i = (i + offset) % CAPACITY;
   }
   found = data[i].key == key;
}

void Table::find( int key, bool& found, rec& result ) const
{
   int index;

  
   findIndex( key, found, index );
   if ( found )
      result = data[index];
}


int main( )
{

    int choice;
    Table dataTable;
    rec rec;
    int key;
    bool found;
    int size;

   
    do
    {
        cout << endl;
    cout << "MENU " << endl;
    cout << " 1   Insert a new record or update existing record" << endl;
    cout << " 2   Find a record" << endl;
    cout << " 3   Get the number of records" << endl;
    cout << " 4   Quit this test program" << endl << endl;

        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;


        switch (choice)
        {
            case 1:
                      cout << "Enter key for record: ";
                      cin >> rec.key;
                      cout << "Enter data for record: ";
                      cin >> rec.data;

                      dataTable.insert( rec );
                      cout << "Record was inserted in table" << endl << endl;
                      break;
            case 2:
                      cout << "Enter key to search for: ";
                      cin >> key;
                      dataTable.find( key, found, rec );
                      if ( found )
                      {
                         cout << "Record was found." << endl;
                         cout << "   key      = " << rec.key << endl;
                         cout << "   data     = " << rec.data << endl;

                      }
                      else
                         cout << "Record with key " << key << " not found."<< endl << endl;
                      break;
            case 3:
                      size = dataTable.size( );
                      cout << "There are " << size << " records in the table."<< endl;
                      cout << "There are " << (CAPACITY - size)<< " empty slots left in the table." << endl << endl;
                      break;
            case 4:   cout << "Test program ended." << endl;
                      break;
            default:  cout << choice << " is invalid." << endl;
        }
    }
    while ((choice != 4));

    return 0;
}



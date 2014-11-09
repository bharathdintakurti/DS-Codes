#include<iostream>

using namespace std;
class sequen
{
	private:
	  int arr[],a,b,n,first,last,size;


	public:


	sequen()
	{
			cout<<"Sequences\n";
			cout<<"Enter the Size : ";
			cin>>n;
			int *arr = new int[n];
			first = -1;
			size = -1;
			last = n-1;

	}

	void insert_begin()
			{
				if(isempty())
				{
					first=last=0;
				}

				else
				{
					if(size!=last)
					{
						for(int i=size;i>=first;i--)
						{
							arr[i+1]=arr[i];
						}
					}

					else
					{
						cout<<"Sequence is full\n";
						return;
					}
				}
				cout<<"ENTER THE ELEMENT : ";
				cin>>arr[first];
				return;

			}

            void insert_pos()
            {
				int a,b;
				cout<<"\nEnter the element to be inserted : ";
				cin>>b;
				cout<<"\nEnter the position : ";
        		cin>>a;
        		if(a>size)
        		{
        			cout<<"Position not in sequence\n";
        			return ;
        		}
        		else if(size!=last)
        		{
        			for(int i=size;i>=first;i--)
					{
						arr[i+1]=arr[i];
					}
        		}
        		else
        		{
        			cout<<"\nThe sequence is full\n";
        			return ;
        		}
            }

        void insert_last()
            {
            	int a,b;
				cout<<"\nEnter the element to be inserted : ";
				cin>>b;
				if(size!=last)
				{
        			cout<<"\nThe sequence is full\n";
        			return ;
        		}
        		else
        		{
        			arr[size++]=b;
        		}
            }

        void delete_pos()
            {
            	int a,b;
				cout<<"\nEnter the position to be removed : ";
				cin>>b;
				if(isempty())
				{
					cout<<"The list is empty\n";
					return;
				}
				else
				{
					for(int i=b;i!=size;i++)
					{
						arr[i]=arr[i+1];
					}

				}
				return ;
            }

        void ele_atRank()
            {
            	int a,b;
				cout<<"\nEnter the position : ";
				cin>>b;
				if(isempty())
				{
					cout<<"The list is empty\n";
					return;
				}
				else
				{
					cout<<"The element is : "<<arr[b-1] << endl;
				}
            }

        void replace()
            {
            	int a,b;
				cout<<"Enter the position to be replaced: ";
				cin>>b;
				cout<<"Enter the element : ";
				cin>>a;
				if(isempty())
				{
					cout<<"The list is empty\n";
					return;
				}
				else
				{
					arr[b-1]=a;
				}

            }

        void search()
            {
            	int a,b;
				cout<<"Enter the element : ";
				cin>>a;
				if(isempty())
				{
					cout<<"The list is empty\n";
					return;
				}
				else
				{
					for(int i=0;i<size;i++)
					{
						if(arr[i]==a)
						{
							cout<<"The element is found at position : "<< i+1 << endl;
						}
					}
				}
            }

        void display()
            {
            	int a,b;
				cout<<"Enter the element : " << endl;
				cin>>a;
				if(isempty())
				{
					cout<<"The list is empty\n" <<endl;
					return;
				}
				else
				{
					cout<<"The elements are : " << endl;
					for(int i=0;i<size;i++)
					{
						cout<<arr[i]<<" ";

					}
				}

            }

		bool isempty()
		{
			if(first == -1)
			{
				return true ;
			}
			return false;

		}

		bool isfull()
		{
			if(last==size)
			{
				return true;
			}
			return false;
		}

};

int main()
{

	int choice, i;

	int flag = 1;

        sequen sl;

        while (flag)

        {

            cout<<endl<<" Sequences"<<endl;

            cout<<"1.Insert element at first"<<endl;

            cout<<"2.Insert element at last"<<endl;

            cout<<"3.Insert element at position"<<endl;

            cout<<"4.Delete a Particular rank"<<endl;

            cout<<"5.replace Value at rank"<<endl;

            cout<<"6.Search Element"<<endl;

            cout<<"7.Display the elements"<<endl;

            cout<<"8.Find Element at Rank"<<endl;

            cout<<"9.Is empty\n";

            cout<<"10.Is full\n";

            cout<<"11.Exit "<<endl;

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



                sl.replace();

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


                sl.ele_atRank();

                cout<<endl;

                break;


            case 9:

                cout<<"Exiting..."<<endl;

                flag = 0;

                break;

            default:

                cout<<"Wrong choice"<<endl;

            }

        }


return 0;
}


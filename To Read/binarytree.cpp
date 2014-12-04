#include<iostream>
#include<cstdlib>
#include<queue>
#include<cmath>

using namespace std;

class node
{
	public:

		int data;
		node *left;
		node *right;
};
class tree : public node
{
	private:
		int n,value;
		node *root;
	public:
  		tree()
		{

				int q=0,val;
				node *p=new node;
				root=p;
				queue<node*> Q;
				Q.push(p);
				while(!Q.empty())
				{
					if(q<15)
					{
							node *current;
							current = Q.front();
							Q.pop();
							cin >> val;
							current->data=val;
							q++;
							if(q<8)
							{
								node *a=new node;
							        a->left=a->right=NULL;
								 current->left=a;
								node *b=new node;
								b->left=b->right=NULL;
								 current->right=b;
								Q.push(current->left);
								Q.push(current->right);
							}

					}
					else
					{
						break;
					}

				}
			}

		void pretrvsal()
			{
				preorder(root);
			}

		void preorder(node *root)
			{
				if(root==NULL)
				{
					return ;
				}
				cout<<" "<<root->data<<" ";
				preorder(root->left);
				preorder(root->right);

			}

		void posttrvsal()
			{
				postorder(root);
			}

		void postorder(node *root)
			{
				if(root==NULL)
				{
					return ;
				}

				postorder(root->left);
				postorder(root->right);
				cout<<" "<<root->data<<" ";

			}

		void intrvsal()
			{
				inorder(root);
			}

		void inorder(node *root)
			{
				if(root==NULL)
				{
					return ;
				}

				inorder(root->left);
				cout<<" "<< root->data <<" ";
				inorder(root->right);

			}

		void levelorder()
			{
				if(root == NULL)
				return;

				queue<node*> Q;
				Q.push(root);
				while(!Q.empty())
				{
					node* current = Q.front();
					Q.pop();
					cout<<" "<<current->data<<" ";
					if(current->left != NULL) Q.push(current->left);
					if(current->right != NULL) Q.push(current->right);
				}
			}

		void level()
			{
				cout<<"enter the level : ";
				cin>>n;
				int a=1;
				if(root == NULL)
				return;

				queue<node*> Q;
				Q.push(root);
				while(!Q.empty())
				{
					node* current = Q.front();
					Q.pop();
					if(a>=pow(2,n) && a<pow(2,n+1))
					           cout<<" "<<current->data<<" ";
                    a++;
					if(current->left != NULL) Q.push(current->left);
					if(current->right != NULL) Q.push(current->right);
				}
			}


			void find()
			{
				cout<<"enter the key : ";
				cin>>n;
				int a=1;
				if(root == NULL)
				return;

				queue<node*> Q;
				Q.push(root);
				while(!Q.empty())
				{
					node* current = Q.front();
					Q.pop();
					if(n==current->data)
					cout<<"the key is found at node : "<<a;
					a++;
					if(current->left != NULL) Q.push(current->left);
					if(current->right != NULL) Q.push(current->right);
				}
			}
};

int main()
{
	int choice,a;

        tree tr;

        while (1)

        {

            cout<<endl<<"\tBINARY TREE (0-14)"<<endl;

	    cout<< "*********************************\n";

            cout<<"\t1.Pre Order Traversal"<<endl;

            cout<<"\t2.Post Order Traversal"<<endl;

            cout<<"\t3.In Order Traversal"<<endl;

            cout<<"\t4.Level Order Traversal"<<endl;

            cout<<"\t5.Print Keys at a level"<<endl;

            cout<<"\t6.Find Key at node"<<endl;

            cout<<"\t7.Exit "<<endl;

            cout<<"\nEnter your choice : ";

            cin>>choice;

            switch(choice)

            {

            case 1:


                tr.pretrvsal();

                cout<<endl;

                break;

            case 2:


                tr.posttrvsal();

                cout<<endl;

                break;

            case 3:


                tr.intrvsal();

                cout<<endl;

                break;

	    case 4:


		tr.levelorder();

                cout<<endl;

                break;

	    case 5:


                tr.level();

                cout<<endl;

                break;


	    case 6:


                tr.find();

                cout<<endl;

                break;

	    case 7:

		exit(0);

	    default:

             	break;
		}
	}

return 0;
}


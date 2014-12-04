#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int adj[100][100];
class graph
{
	public:
		int n;

		void creategraph()
		{
			cout<<"enter the total number of vertexs"<<endl;
			cin>>n;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					adj[i][j]=0;
				}
			}
		}
		void insertvertex()
		{
            n++;
			cout<<"inserted vertex is"<<n<<endl;
			for(int i=1;i<=n;i++)
		   {
				adj[n][i]=0;
				adj[i][n]=0;
			}
		}
		void deletevertex(int p)
		{
			if(n==0)
			{	cout<<"the graph is empty"<<endl;
				return;
			}
			else if(p>n)
			{
				cout<<"the vertex is not present in the graph"<<endl;
				return;
			}

			for(int i=p;i<=n-1;i++)
			{
				for(int j=1;j<=n;j++)
					{
						adj[i][j]= adj[i+1][j];
						adj[j][i]= adj[j][i+1];
					}
			}
			n--;
		}
		void addedge(int a,int b)
		{
			if(a>n)
			{
				cout<<"source vertex does not exist"<<endl;
				return ;
			}
			if(b>n)
			{
				cout<<"destination vertex does not exist"<<endl;
				return;
			}
			adj[a][b]=1;
		}
		void removeedge(int a,int b)
		{
			if(a>n ||b>n ||adj[a][b]==0)
		 	{
				cout<<"the edge doesnt exist"<<endl;
				return;
			}
			adj[a][b]=0;
	   }
		bool isedge(int a,int b)
		{
			if(adj[a][b]==1)
				return true;
			else
				return false;
		}
			void display()
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						cout<<adj[i][j]<<" ";
					}
					cout<<"\n";
				}
			}

};
int main()
{
	graph g1;
	g1.creategraph();
	int choice;
	while(1)
	{
		cout<<"-----Operations on a graph-------"<<endl;
		cout<<"1.insert a vertex"<<endl;
		cout<<"2.delete a vertex"<<endl;
		cout<<"3.insert an edge"<<endl;
		cout<<"4.delete an edge"<<endl;
		cout<<"5.is an edge"<<endl;
		cout<<"6.display"<<endl;
		cout<<"7.exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				g1.insertvertex();
				break;
            case 2:
					int p;
					cout<<"enter the vertex to be deleted"<<endl;
					cin>>p;
					g1.deletevertex(p);
					break;
            case 3:
						int a,b;
						cout<<"enter the source vertex and destination vertex"<<endl;
						cin>>a>>b;
						g1.addedge(a,b);
						break;
            case 4:
							int c,d;
							cout<<"enter the source vertex and destination vertex"<<endl;
							cin>>c>>d;
							g1.removeedge(c,d);
							break;
            case 5:
								bool q;
								int e,f;
								cout<<"enter the source vertex and destination vertex"<<endl;
								cin>>e>>f;
								q=g1.isedge(e,f);
								if(q==true)
								cout<<"is an edge between vertex"<<e<<"and"<<f<<endl;
								else
								cout<<"is not an edge between vertex"<<e<<"and"<<f<<endl;
								break;
            case 6:
									g1.display();
									break;
        case 7:
										exit(1);
										break;
										default :
											cout<<"wrong choice"<<endl;
											break;

							}
		}
}

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    enum col{Black,Gray,White};

    char fname[20];

    cout << "Enter the filename :";
    cin >> fname;

    ifstream myfile;

    myfile.open(fname);

    if (!(myfile.is_open()))
    {
        cout << "Unable to open file" << endl ;
    }
    else
    {
        cout << "File opened successfully\n";
    }
   int n,m;
 /* cout << "Enter the number of vertices :";
    cin >> n;

    cout << "Enter the no. of edges :";
    cin >> m;
*/
    myfile >> n;
    myfile >> m;


    int weight[n][n];
    enum col colour[n];
    int dist[n];
    int level[n];
    int que[n];
    int st,en,we,k;
    int front= 0;
    int back = 0;

    for(int i=0;i<m;i++)
    {
/*
        cout << "Enter the starting vertex of edge "<< i+1 <<": ";
        cin >> st;
        cout << "Enter the destination vertex of edge "<< i+1 <<": ";
        cin >> en;
        cout << "Enter the weight of edge "<< i+1 <<": ";
        cin >> we;
        cout << endl;
*/
        myfile >> st;
        myfile >> en;
        myfile >> we;


        weight[en][st] = we;
        weight[st][en] = we;


    }

    cout << "Breadth First Search\n\n\n" ;

    int v;

    cout << "Enter the vertex from which distances are to be found :";
    cin >> v;



    cout << "Vertex " << v << endl;

    for(int i=1;i<=n;i++)
    {
        colour[i] = White;
        dist[i] = 2313;
        level[i] = 3424;
    }

    level[v] = 1;
    dist[v] = 0;
    colour[v] = Gray;
    k = 1;

    while(k<n)
    {
    for(int j=1;j<=n;j++)
     {

        if(weight[v][j]!=0 && colour[j]== White)
        {

            colour[j] = Gray;
            que[back++] = j ;
            //dist[j] =  weight[j][v] + dist[v];
            level[j] = level[v] + 1;
        }

    }

    colour[v] = Black;
    v=que[front++];
    cout << "Vertex " << v << endl;
    k++;

    }
    myfile.close();

}

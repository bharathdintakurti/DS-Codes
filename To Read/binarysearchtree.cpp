#include<iostream>
#include<cstdlib>

using namespace std;

void insert(int,int );
void delte(int);
void display(int);
int search(int);
int findmin(int);
int success(int,int);
int predess(int,int);
int findmax(int);
int search1(int,int);
int findpos(int,int);
int tree[40],t=1,s,x,i;

main()
{
	int ch,y;
	for(i=1;i<40;i++)
	        tree[i]=-1;
	while(1)
	{
	    cout << "\n\tMENU\n***************************\n";
        cout <<"1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit\n6.Find Min\n7.Find Max\n8.Find a sucessor\n9.Find a predecessor\nEnter your choice:";
		cin >> ch;
		switch(ch)
		{
		case 1:
			cout <<"Enter the element to insert:";
			cin >> ch;
			insert(1,ch);
			break;
		case 2:
			cout <<"Enter the element to delete:";
			cin >>x;
			y=search(1);
			if(y!=-1)
                delte(y);
			else
			     cout<<"No such element in tree\n";
			break;
		case 3:
			display(1);
			break;
case 4:
			cout <<"Enter the element to search:";
			cin >> x;
			y=search(1);
			if(y == -1)
                cout <<"No such element in tree\n";
			else
			    cout <<x << "is in" <<y <<"position" << endl;
			break;
		case 5:
			exit(0);
		case 6:
            int min;
            min = findmin(1);
            cout << "Minimum element in BST is " << tree[min] << endl;
            break;
        case 7:
            int max;
            max = findmax(1);
            cout << "Minimum element in BST is " << tree[max] << endl;
            break;
        case 8:
            int succ;
            cout << "Enter an element to find the successor:";
            int sss;
            cin >> sss;
            succ = success(1,sss);
            cout << "Successor element is " << tree[succ] << endl;
            break;
       case 9:
            int pred;
            cout << "Enter an element to find the predessor:";
            int ppp;
            cin >> ppp;
            pred = predess(1,ppp);
            cout << "Predessor element is " << tree[pred] << endl;
            break;


		}
	}
}

void insert(int s,int ch )
{
	int x;
	if(t==1)
	{
		tree[t++]=ch;
		return;
	}
	x=search1(s,ch);
	if(tree[x]>ch)
		tree[2*x]=ch;
	else
		tree[2*x+1]=ch;
	t++;
}
void delte(int x)
{
	if( tree[2*x]==-1 && tree[2*x+1]==-1)
		tree[x]=-1;
	else if(tree[2*x]==-1)
	      {	tree[x]=tree[2*x+1];
		    tree[2*x+1]=-1;
	      }
	else if(tree[2*x+1]==-1)
	      {	tree[x]=tree[2*x];
            tree[2*x]=-1;
	      }
	else
	{
	  tree[x]=tree[2*x];
	  delte(2*x);
	}
	t--;
}

int search(int s)
{
    if(t==1)
    {
        cout <<"No element in tree\n";
        return -1;
    }
    if(tree[s]==-1)
        return tree[s];
    if(tree[s]>x)
        search(2*s);
    else if(tree[s]<x)
        search(2*s+1);
    else
        return s;
}

void display(int s)
{
    if(t==1)
      {cout <<"No element in tree\n";
        return;}
    for(int i=1;i<40;i++)
       {if(tree[i]==-1)
            cout <<" ";
        else
            cout <<tree[i] << endl;}
return ;
}

int search1(int s,int ch)
{
    if(t==1)
    {
        cout <<"No element in tree\n";
        return -1;
    }
    if(tree[s]==-1)
        return s/2;
    if(tree[s] > ch)
        search1(2*s,ch);
    else
        search1(2*s+1,ch);
}

int findpos(int s,int ch)
{
    if(t==1)
    {
        cout <<"No element in tree\n";
        return -1;
    }
    if(tree[s]==ch)
            return s-1;
    if(tree[s] > ch)
        search1(2*s,ch);
    else
        search1(2*s + 1,ch);
}

int findmin(int s)
{
    if(t == 1)
    {
        cout << "No element in tree\n";
    }
    if(tree[2*s]!=-1)
        findmin(2*s);
    else
        return s;
}

int findmax(int s)
{
    if(t == 1)
    {
        cout << "No element in tree\n";
    }
    if(tree[2*s + 1]!=-1)
        findmax(2*s + 1);
    else
        return s;
}


int success(int s,int ch)
{
    if(t == 1)
    {
        cout << "No element in tree\n";
    }

    int ser;

    x=ch;
    ser = search(1);

    ser--;

    cout << "found at " << ser << endl;


    if(tree[2*x+1] != -1)
    {
        return findmin(2*x+1);
    }
    int y = x/2;

    while(y != 0 && x == 2*y + 1)
    {
        x = y;
        y = y/2;
    }
    return y;
}

int predess(int s,int ch)
{
    if(t == 1)
    {
        cout << "No element in tree\n";
    }

    int ser;

    x=ch;

    ser = search(1);

    ser--;

    cout << "found at " << ser << endl;


    if(tree[2*x] == -1)
    {
        return findmax(2*x);
    }
    int y = x/2;

    while(y != 0 && x == 2*y )
    {
        x = y;
        y = y/2;
    }
    return y;
}



    #include<iostream>
    #include<string>

    using namespace std;
    class details
    {
    public:
    char *name;
    int age;
    int accno;
    char branch[50];
    char city[40];
    void getdetails()
    {
    name=new char[20];
    cout<<endl<<endl<<"**********Customer Details*********** "<<endl;
    cout<<" -------- -"<<endl;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Account Number: ";
    cin>>accno;
    cout<<"Enter Branch: ";
    cin>>branch;
    cout<<"Enter City: ";
    cin>>city;
    cout<<"______________________________________"<<endl<<endl;
    }
    };
    class bank
    {
    public:
    static int accnumber;
    long balance;
    details d;
    void getdata();
    bank transfermoney(bank);
    void deposit();
    void withdrawal();
    void newaccount();
    void viewaccdetails();
    };
    int bank::accnumber=0;
    int main()
    {
    char ch;
    static int i=0;
    bank *a[10];
    int x,amt,k,j;
    do
    {
    cout<<endl<<endl<<"************MENU************"<<endl;
    cout<<" ---- "<<endl;
    cout<<"1.Create new account\n2.Deposit\n3.Withdraw\n4.Transfer credits\n5.View account details\n\n";
    cout<<"Enter choice no.: ";
    cin>>x;
    switch(x)
    {
    case 1:
    {
    i++;
    a[i]=new bank;
    a[i]->newaccount();
    break;
    }
    case 2:
    {
    cout<<"Enter account no.: ";
    cin>>k;
    a[k]->deposit();
    break;
    }
    case 3:
    {
    cout<<"Enter account no.: ";
    cin>>k;
    a[k]->withdrawal();
    break;
    }
    case 4:
    {
    cout<<"Enter the source and destination account nos.: ";
    cin>>k>>j;
    *a[j]=a[k]->transfermoney(*a[j]);
    break;
    }
    case 5:
    {
    cout<<"Enter account no.: ";
    cin>>k;
    a[k]->viewaccdetails();
    break;
    }
    }cout<<"\nDo you wish to continue[Press 'Y' to continue or 'N' to exit menu]: ";
    cin>>ch;
    }while(ch=='y'||ch=='Y');
    }
    bank bank::transfermoney(bank a)
    {
    long amt;
    cout<<"Enter amount to be transferred: ";
    cin>>amt;
    a.balance=a.balance+amt;
    if(balance<amt)
    {
    cout<<"\nInsufficient balance! Operation Cannot be performed!"<<endl<<endl;
    }
    else
    {
    balance=balance-amt;
    }
    return a;
    }
    void bank::withdrawal()
    {
    int amtdrawn;
    cout<<"Enter amount to be withdrawn: ";
    cin>>amtdrawn;
    if(balance<=amtdrawn)
    cout<<"\nInsufficient balance! Operation Cannot be performed!"<<endl<<endl;
    else
    balance=balance-amtdrawn;
    }
    void bank::deposit()
    {
    int dep;
    cout<<"Enter amount to be deposited: ";
    cin>>dep;
    balance+=dep;
    }
    void bank::newaccount()
    {
    accnumber++;
    d.getdetails();
    balance=0;
    }
    void bank::viewaccdetails()
    {
    cout<<endl<<endl<<"*********ASSIGNMENT BANK ACCOUNT DETAILS*********"<<endl;
    cout<<" --- ---- ------- ------- "<<endl;
    cout<<"Account no.: "<<accnumber<<endl;
    cout<<"Name: "<<d.name<<endl;
    cout<<"Branch: "<<d.branch<<endl;
    cout<<"City: "<<d.city<<endl;
    cout<<"Current Balance: "<<balance<<endl;
    cout<<"_________________________________________"<<endl;
    }

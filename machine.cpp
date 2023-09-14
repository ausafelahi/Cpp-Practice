#include<iostream>
using namespace std;

class User {
    private :
    string name;
    string password;

    public: 
    double balance = '0';
    User( string a, string b)
    {
        name = a;
        password = b;
    }

    bool checkpassword (string pass) {
        if(pass == password) {cout<<"Access Granted"<<endl;return 1;}
        else {cout<<"Access Denied"<<endl; return 0;}
    };
    bool checkname (string nam) {
        if(nam == name) {cout<<"Name Recognized"<<endl;return 1;}
        else {cout<<"Name not Recognized"<<endl; return 0;}
    };
};


int startmenu()
{
    cout<<"Welcome to Main Menu"<<endl;
    cout<<"1 - Balance"<<endl;
    cout<<"2 - Deposit"<<endl;
    cout<<"3 - Withdrawal"<<endl;
    cout<<"4 - Exit"<<endl;
    cout<<"Selection : "<<endl;

    int op;
    cin>>op;

    return op;
}



int main()
{
    User u1 = User ("Ausaf","2003");
    string n,p;

    cout<<"Welcome to ATM Machine"<<endl;
    cout<<"Enter your Name"<<endl;
    cin>>n;

    cout<<"Enter your Password"<<endl;
    cin>>p;

    if(u1.checkname(n) && u1.checkpassword(p))
    {
        start:
        int i;
        i = startmenu();

        switch(i){
        case 1 : {cout<<"Your current balance is " <<u1.balance<<endl; break;}
        case 2 :
        {
            double dep;
            cout<< "Enter the amount you want to deposit : ";
            cin>>dep;
            u1.balance+=dep;
            break;
        }
        case 3 :
        {
            double wd;
            cout<<"Enter your amount you want to withdraw : ";
            cin>>wd;
            if(wd > u1.balance) {cout<<"Insufficient amount"<<endl;}
            else u1.balance-=wd;
        }
        case 4 : break;
        }
    };

    cout<<"Would you like to continue?"<<endl;
    cout<<"1 - Yes"<<endl;
    cout<<"2 - No"<<endl;
    cout<<"Selection"<<endl;

    int in;
    cin>>in;

    if(in == 1) {system("cls");goto start;}
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int *point = &a;

    cout<<point<<endl;

    string name, pass;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Enter your password"<<endl;
    cin>>pass;

    cout<<"The name you entered is : "<<name<<endl;
    cout<<"The password you entered is : "<<pass<<endl;

    return 0;
}
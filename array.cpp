#include<iostream>
using namespace std;
#include<fstream>

class user
{
    public:

    string username;

    void entername()
    {
        cin>>username;
    }
};

int main()
{
    /* int marks[] = {21,23,25,27,29,22,24,26,28};
    cout<<marks[2]; */

    user array[5];
    int i;
    ofstream file("username.txt");
    for (i = 0; i < 5; i++)
    {
        cout<<"Enter your name ";
        array[i].entername();
        file<<array[i].username<<endl;
    }
    

    return 0;
}
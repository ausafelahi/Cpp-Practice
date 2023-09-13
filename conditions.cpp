#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter marks \n";
    cin>>marks;

    if(marks > 100 || marks < 0) cout<<"Enter a valid number";
    else if(marks > 80) cout<<"Grade A+";
    else if(marks < 80 && marks > 70) cout<<"Grade A";
    else if(marks < 70 && marks > 60) cout<<"Grade B";
    else if(marks < 60 && marks > 50) cout<<"Grade C";
    else if (marks < 50) cout<<"Grade F";

    return 0;
}
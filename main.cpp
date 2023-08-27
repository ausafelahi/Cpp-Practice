#include<iostream>
using namespace std;

int main()
{
    cout<< "**Welcome to calculator program**\n";
    cout<< "Enter two numbers\n";

float n1,n2;

    cout<< "\nEnter the value for number 1";
    cin>>n1;
    cout<< "\nEnter the value for number 2";
    cin>>n2;

float sum,sub,mul,div;

     sum = n1 + n2;
     sub = n1 - n2;
     mul = n1 * n2;
     div = n1 / n2;

     cout<< "\nThe sum of n1 and n2 is "<<sum;
     cout<< "\nThe difference of n1 and n2 is "<<sub;
     cout<< "\nThe multiplication of n1 and n2 is "<<mul;
     cout<< "\nThe division of n1 and n2 is "<<div;

     system("pause");

     return 0;
}

#include<iostream>
using namespace std;

void sum()
{
    int a;
    int b;
    int sum;

    cout<<"Enter the value of A: "<<endl;
    cin>>a;
    cout<<"Enter the value of B: "<<endl;
    cin>>b;
    sum = a + b;
    cout<<"The sum of value A and B : "<<endl;
    cout<<sum<<endl;
    cout<<"***********************"<<endl;

}

int main()
{
    while(false)
    sum();

    return 0;
}
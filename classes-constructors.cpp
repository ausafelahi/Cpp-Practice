#include<iostream>
using namespace std;

class car{
    public:

    string model;
    int speed;
    int price;
    string color;

    car(string m, int s, int p, string c)
    {
        model = m;
        speed = s;
        price = p;
        color = c;
    }
};


int main()
{
    car toyota = car("t1", 80, 500, "white");
    cout<<toyota.model<<endl;
    cout<<toyota.speed<<endl;
    cout<<toyota.price<<endl;
    cout<<toyota.color<<endl;

    return 0;
}
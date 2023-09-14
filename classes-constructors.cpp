#include <iostream>
using namespace std;

class car
{
public:
    string model;
    float speed;
    float price;
    string color;

    car(string m, int s, int p, string c)
    {
        model = m;
        speed = s;
        price = p;
        color = c;
    }

    void car_run()
    {
        cout << model << " is running with a speed of " << speed << " kph" <<" with a price of "<< price << endl;
    }

    void car_dis(float distance)
    {
        cout << model << " will take " << distance/speed << " hours to cover " <<distance<< price << endl;
    }
};

int main()
{
    car toyota = car("t1", 80, 500, "white");
    car bmw = car("b1", 90, 600, "blue");
    car ferrari = car("f1", 100, 700, "red");
    cout << toyota.model << endl;
    cout << toyota.speed << endl;
    cout << toyota.price << endl;
    cout << toyota.color << endl;

    toyota.car_run();
    bmw.car_run();
    ferrari.car_run();
    toyota.car_dis(30);
    bmw.car_dis(30);
    ferrari.car_dis(30);

    return 0;
}
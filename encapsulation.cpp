#include <iostream>
using namespace std;

class car
{
private:
    string model;
    float speed;
    int price;
    string color;
public:

    void setspeed(int s)
    {
        speed  = s;
    }

    float getspeed()
    {
        return speed;
    }

    car(string m, float s, int p, string c)
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
        cout << model << " will take " << distance/speed << " hours to cover " << distance << " kilometer " << endl;
    } 
};

int main()
{
    car toyota = car("t1", 80, 500, "white");
    car bmw = car("b1", 90, 600, "blue");
    car ferrari = car("f1", 100, 700, "red");


    float change_speed;
    cin>>change_speed;

    toyota.setspeed(change_speed);

    cout<<toyota.getspeed();

    return 0;
}
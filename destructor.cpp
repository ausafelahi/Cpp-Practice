#include <iostream>
using namespace std;

class car
{
protected:
    string model;
    float speed;
    int price;
    int *p = &price;
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

    ~car(){
        cout<<" destructor invokes for class car";
    }

   virtual void car_run(float distance)
    {
        cout << model << " tesla electric car will take " << distance/speed << " kph" <<" with a price of "<< price << endl;
    }
};

class electric_car: car {
public:
      int battery_mah;


    electric_car(string m, float s, int p, string c, int bm): car(m,s,p,c)
    {
        model = m;
        speed = s;
        price = p;
        color = c;
        battery_mah = bm;
    }

    void car_run(float distance)
    {
        cout << model << " tesla electric car will take " << distance/speed << " kph" <<" with a price of "<< price << endl;
    }

};

int main()
{
    car toyota = car("t1", 80, 500, "white");
    car bmw = car("b1", 90, 600, "blue");
    car ferrari = car("f1", 100, 700, "red");


    electric_car tesla = electric_car("t2", 900, 1000, "black", 80000);
    electric_car *tesla2 = &tesla;

    tesla2->car_run(900);
    
    tesla.car_run(400);

    return 0;
}
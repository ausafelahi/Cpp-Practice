#include<iostream>
using namespace std;

template<class T>
class calculate {

    public:

    T a;
    T b;

    T add(){
        return a + b;
    }

    T sub()
    {
        return a - b;
    }

    calculate(T n1, T n2)
    {
        a = n1;
        b = n2;
    }
};

int main()
{
    calculate<float> c1 = calculate<float>(12.234,13.6919);
    cout<<c1.add()<<endl;
    cout<<c1.sub()<<endl;

    return 0;
}
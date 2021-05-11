#include <iostream>
using namespace std;

class base1
{
    int a;

public:
    base1(int x)
    {
        a = x;
    }
    void printbase1()
    {
        cout << "base1 is invoked " << endl;
    }
};
class base2
{
    int b;

public:
    base2(int y)
    {
        b = y;
    }
    void printbase2()
    {
        cout << "base2 is invoked " << endl;
    }
};
class derived : public base1, public base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int d1, int d2) : base1(a), base2(b)
    {
        derived1 = d1;
        derived2 = d2;
    }
    void printdata()
    {
        cout << "derived class is invoked " << endl;
    }
};

int main()
{
    derived der(5, 10, 15, 20);
    der.printbase1();
    der.printbase2();
    der.printdata();
    return 0;
}
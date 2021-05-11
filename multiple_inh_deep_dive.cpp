#include <iostream>
using namespace std;

class base1
{
protected:
    int a;

public:
    void setdata_1(int x)
    {
        a = x;
    }
};
class base2
{
protected:
    int b;

public:
    void setdata_2(int y)
    {
        b = y;
    }
};
class base3
{
protected:
    int c;

public:
    void setdata_3(int z)
    {
        c = z;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void display()
    {
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
        cout << "Value of c is " << c << endl;
        cout << "sum of all three values is " << a + b + c << endl;
    }
};

int main()
{
    derived der;
    der.setdata_1(10);
    der.setdata_2(440);
    der.setdata_3(50);
    der.display();
    return 0;
}
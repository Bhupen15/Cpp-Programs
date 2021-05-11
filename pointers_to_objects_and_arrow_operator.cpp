#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    void print_value(int x, int y)
    {
        a = x;
        b = y;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    // test t;
    //t.print_value(10,20);
    //test *ptr = &t;
    //(*ptr).print_value(10,20);
    test *ptr = new test;
    ptr->print_value(10, 20);
    return 0;
}
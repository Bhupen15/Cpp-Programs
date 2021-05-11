#include <iostream>
using namespace std;
class test
{
    int a;
    int b;

public:
    test( int i, int j) : a(i), b(j)
    {
        cout << "Value of a " << a << endl;
        cout << "Value of b " << b << endl;
    }
};
int main()
{
    test t(100, 200);

    return 0;
}
//#include <iostream>
//using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j){constructor-body}
};
*/


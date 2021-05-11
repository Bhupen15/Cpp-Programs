#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    int a;
    int b;

public:
    void setdata1()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
    void getdata1()
    {
        cout << "Addition of two numbers is: " << a + b << endl;
        cout << "Subtraction of two numbers is: " << a - b << endl;
        cout << "Multiplication of two numbers is: " << a * b << endl;
        cout << "Division of two numbers is: " << a / b << endl;
    }
};
class ScientificCalculator
{
    int a;
    int b;

public:
    void setdata2()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
    void getdata2()
    {
        cout << "The value of cos(a) is: " << cos(a) << endl;
        cout << "The value of sin(a) is: " << sin(a) << endl;
        cout << "The value of tan(b) is: " << tan(b) << endl;
        cout << "The value of exp(b) is: " << exp(b) << endl;
      //  cout<<sqrt(256)<<endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
   
};

int main()
{
    HybridCalculator hbd;
    hbd.setdata1();
    hbd.getdata1();
    hbd.setdata2();
    hbd.getdata2();
    return 0;
}
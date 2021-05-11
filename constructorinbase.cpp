#include <iostream>
using namespace std;

class base1
{
    protected:
    int a;

public:
    base1(int x)
    {
        a = x;
        cout << "base1 is invoked " << endl;
    }
    
   /* void printbase1()
    {
        cout << "base1 is invoked " << endl;
    }*/
};
class base2
{
    protected:

    int b;

public:
    base2(int y)
    {
        b = y;
        cout << "base2 constructor is invoked " << endl;
    }
  /*  void printbase2()
    {
        cout << "base2 constructor is invoked " << endl;
    }*/
};
class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int w, int x, int d1, int d2) : base2(w), base1(x)
    {
        derived1 = d1;
        derived2 = d2;
    }
    void printdata()
    {
        cout << "derived class is invoked " << endl;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<derived1<<endl;
        cout<<derived2<<endl;
    }
};

int main()
{
    derived der(5, 10, 15, 20);
  //  der.printbase1();
   // der.printbase2();
    der.printdata();
    return 0;
}
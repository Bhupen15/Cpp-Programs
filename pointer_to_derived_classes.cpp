#include <iostream>
using namespace std;
class base
{
public:
    int var_base;

    void display()
    {
        cout << "base class value will print : " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived;

    void display()
    {
        cout << "derived class value will print : " << var_base << endl;
        cout << "derived class value will print : " << var_derived << endl;
    }
};
int main()
{
    base Obj_base;
    derived Obj_derived;
    base *base_pointer;
    derived *derived_pointer;
   
   // derived_pointer = &Obj_derived;
     base_pointer= &Obj_base;
    // base_pointer = &Obj_derived;

    base_pointer->var_base = 1500;
    base_pointer->display();

    derived_pointer->var_derived = 2000;
    derived_pointer->var_base = 3000;
    derived_pointer->display();

    return 0;
}
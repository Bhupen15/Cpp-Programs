#include <iostream>
using namespace std;
class base
{
    public:
    int var_base=10;
    virtual void display()
    {
        cout<<"1. Value of var_base is "<<var_base<<endl;
    }
};
class derived : public base
{
    public:
    int var_derived=20;
    void display()
    {
        cout<<"2. Value of var_base is "<<var_base<<endl;
        cout<<"2. Value of var_base is "<<var_derived<<endl;
    }
};

int main()
{
    base *base_pointer;
    base Obj_base;
    derived Obj_derived;
    derived *derived_pointer;

    base_pointer = &Obj_derived;
  //  derived_pointer = &obj_derived;
    base_pointer->display();

    return 0;
}
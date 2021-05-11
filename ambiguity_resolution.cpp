#include <iostream>
using namespace std;

class base1
{
public:
    void greet1()
    {
        cout << "Hello" << endl;
    }
};
class base2
{
public:
    void greet2()
    {
        cout << "Hare Krishna" << endl;
    }
};
class derived : public base1, public base2
{  
    public:
   // void putdata()
    //{
    //    greet2();
    //}
    void display()
    {  
        
      
    }
};
int main()
{
    base1 b1;
    b1.greet1();
    base2 b2;
    b2.greet2();
    derived d;
    d.greet2();
    
    return 0;
}
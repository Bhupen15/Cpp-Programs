#include <iostream>
using namespace std;
class test
{
   int a;
   public:
    void setdata(int a)
    {
       this->a=a;
    
    }
    void getdata()
    {
        cout<<"Value of a is :"<<a<<endl;
    }
};
int main()
{
    test t;
    t.setdata(10);
    t.getdata();
    return 0;
}
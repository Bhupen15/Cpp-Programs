#include<iostream>
using namespace std;

class Bharat
{
    protected:
    int a;

};

class Bhupendra : protected Bharat
{
    public:
   int setdata()
   {
       a=10;
       return a;
   }

    void display()
   {
       cout<<"Value of a "<<setdata()<<endl;
   }
};

int main()
{
    Bhupendra der;
    der.setdata();
    der.display();
   return 0;
}
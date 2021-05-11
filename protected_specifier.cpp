#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
    public:
    
    void setdata1()
    {
        b=10;
    }
   // void setdata2()
    //{
     //   a=20;
    //}
    int getdata1()
    {
        return b;
    }
    //int getdata2()
    //{
      //  return a;
    //}*/
    

};

class derived : protected base
{
   public:
   void putdata()
   {
       setdata1();
      // setdata2();
   }
   void display()
   {
       cout<<"Value of b "<<getdata1()<<endl;
       
       //cout<<"Value of a "<<getdata2()<<endl;

   }
};

int main()
{ 
    derived der;
    der.putdata();
    der.display();
    return 0;
}
#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setdata(int r)
    {
        roll_number = r;
    }
    void setdata2()
    {
        cout<<"Roll no. is "<<roll_number<<endl;
    }
};
class Exam : public Student
{
protected:
    int maths;
    int physics;

public:
    void getdata(int num1, int num2)
    {
        maths = num1;
        physics = num2;
    }
    void getdata2()
    {
        cout<<"Marks obtained in maths "<<maths<<endl;
         cout<<"Marks obtained in physics "<<physics<<endl;
    }
};
class Result : public Exam
{
protected:
    int percentage;

public:
    void result_per()
    {
        setdata2();
        getdata2();
        percentage=(maths+physics)/2;
    }
    void display()
    {
        
        cout << "Result of student is " << percentage << "%" << endl;
    }
};
int main()
{
    Result res;
    res.setdata(49);
    res.getdata(96,98);
    res.result_per();
    res.display();
    return 0;
}
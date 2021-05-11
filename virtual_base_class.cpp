#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int x)
    {
        roll_number = x;
    }
};
class Test :   public virtual Student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int z, int y)
    {
        maths = z;
        physics = y;
    }
};
class Sports : public virtual  Student
{
protected:
    int score;

public:
    void set_score(int w)
    {
        score = w;
    }
};
class Result : public Test, public Sports
{
protected:
    int total;

public:
    void display()
    {
        total = maths + physics + score;
        cout<<"roll number "<<roll_number<<endl;
        cout<<"marks of maths is "<<maths<<" marks of physics "<<physics<<endl;
        cout<<"score is "<<score<<endl;
        cout << "Result of student is: " << total << endl;
        cout<<"Your result is here:"<<endl
            <<"maths :"<<maths<<endl
            <<"physics :"<<physics<<endl;
    }

};
int main()
{
    Result res;
    res.set_rollnumber(191049);
    res.set_marks(93, 86);
    res.set_score(10);
    res.display();
    return 0;
}
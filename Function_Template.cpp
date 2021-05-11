#include <iostream>
using namespace std;
template <class T1, class T2>

float function_template(T1 x, T2 y)
{
    float avg = (x + y) / 2;
    return avg;
}
int main()
{
    float a;
    a = function_template(10.5, 10.7);
    printf("Average of two numbers is %f", a);
    return 0;
}
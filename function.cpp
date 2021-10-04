#include <iostream>
using namespace std;

int avg(int x, int y)
{
    int avg = (x+y)/2;
    return avg;

}
int main()
{
    int a=20;
    int b=10;
    cout<<"Average is "<<avg(a,b)<<endl;
    return 0;
}

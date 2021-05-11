#include <iostream>
using namespace std;

int sum(int x, int y)
{
    int avg = (x+y)/2;
    return avg;

}
int main()
{
    int a=20;
    int b=10;
    int s = sum(a,b);
    cout<<"Average is "<<s<<endl;
    return 0;
}
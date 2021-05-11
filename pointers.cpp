#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int *ptr = &a;
    cout<<"Value of a "<<a<<endl;
cout<<"Value of a is "<<*(ptr)<<endl;
    //*ptr =999;

    //cout<<*ptr<<endl;
    //cout<<&a<<endl;
   /* float *arr = new float[3];
    arr[0] = 10.5;
    *(arr + 1) = 30.30;
    arr[2] = 100.5;
    arr[3] = 200.64;
    arr[4] = 100.87;
    delete[] arr;

    cout << "The value of arr[0] is :" << arr[0] << endl;
    cout << "The value of arr[1] is :" << arr[1] << endl;
    cout << "The value of arr[2] is :" << arr[2] << endl;
    cout << "The value of arr[3] is :" << arr[3] << endl;
    cout << "The value of arr[4] is :" << arr[4] << endl;*/
    float *p = new float (50.45);
    cout<<"Value of ptr is "<<*p<<endl;

    return 0;
}
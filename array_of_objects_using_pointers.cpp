#include <iostream>
using namespace std;
class Shopitem
{
    int id;
    int price;

public:
    void setdata(int x, int y)
    {
        id = x;
        price = y;
    }
    void getdata(void)
    {
        cout << "Code of this item :" << id << endl;
        cout << "Price of this item :" << price << endl;
    }
};
int main()
{
    int size =3;
    
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptrTemp = ptr;
    int p, q, i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item :" << i + 1 << endl;
        cin >>p>>q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
        
    }
    return 0;
}
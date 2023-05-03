#include <iostream>
using namespace std;
class employee
{
    int price;
    static int count;

public:
    void setprice(void)
    {
        cout << "enter the price of item " << count + 1<<" : ";
        cin >> price;
    }
    void getprice(void)
    {
        cout << "price of your item " << count + 1 << " is : "<<price<<endl;
        count++;
    }
};
int employee ::count;

int main()
{
    employee harsh,abhi,raj;
    harsh.setprice();
    harsh.getprice();
    abhi.setprice();
    abhi.getprice();
    raj.setprice();
    raj.getprice();

    return 0;
}

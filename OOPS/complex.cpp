#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setval(int x, int y)
    {
        a = x;
        b = y;
    }
    void getval(complex p, complex q)
    {
        a = p.a + q.a;
        b = p.b + q.b;
    }
    void printval(void)
    {
        cout << "your complex no is :" << a << "+" << b << "i"<<endl;
    }
};

int main()
{
    complex a1,b1,c1;
    a1.setval(8,3);
    a1.printval();

    b1.setval(4,3);
    b1.printval();
    c1.getval(a1,b1);
    c1.printval();

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    // fibo series 0 1 1 2 3 5 8 13 21
    int n,p=0, c = 1, f = 1;
    cin >> n;
    if (n == 1)
    {
        cout << p;
    }
    else if (n == 2)
    {
        cout << p << "," << f;
    }
    else
    {
        cout<<p;
        for (int i = 0; i < n; i++)
        {
            f=p+c;
            p=c;
            c=f;
            cout<<","<<f;

        }
    }
}
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"a is gratest";
    }
    else if (b>a && b>c)
    {
        cout<<"b is gratest";
    }
    if (c>b && c>a)
    {
        cout<<"c is greatest";
    }
    else
    {cout<<"each are equal";}
    return 0;
}
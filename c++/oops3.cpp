#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void check(void);
    void once_complement(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter binary number :" << endl;
    cin >> s;
}
void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"it's not binary";
            exit(0);
        }
    }cout<<"it's binary "<<endl;
}
void binary ::display(void)
{
    cout << "displaying  no. :" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }cout<<endl;
}
void binary ::once_complement(void)
{cout<<"it's complement is : "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    } for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.check();
    b.display();
    b.once_complement();
  
    return 0;
}
#include <iostream>
using namespace std;
class human
{
    int age;
    int weight;
    int height;

public:
    void aayu(void)
    {
        cout << "what is your age :" << endl;
        cin >> age;
    }
};
class male : public human
{
    int color;

public:
    void home(void)
    {
        cout << "go to your home ";
    }
};

int main()
{
    male prem;
    prem.aayu();


    return 0;
}

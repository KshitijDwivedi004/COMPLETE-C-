#include <iostream>
using namespace std;
class baseclass
{
public:
  int bvar;
 virtual void display()
  {
    cout << "this is base variable :" << bvar<<endl;
  }
};
class derivedclass : public baseclass
{
  public:
  int dvar =10;
  void display()
  {
    cout << "this is derived varible : " << dvar<<endl;
  }
};
int main()
{
  baseclass base;
  derivedclass deri;
  baseclass *bb;
  bb = &deri;
  bb->bvar=20;
  bb->display();
  derivedclass * dd;
  // dd=&deri;
  // dd->bvar=30;
  // bb->display();
  // dd->dvar=55;
  // dd->display();

  return 0;
}

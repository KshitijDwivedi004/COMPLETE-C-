#include <iostream>
using namespace std;
class simplecalci{
    public:
    int a,b;
        void getdata(){
            cout<<"give the value of a : "<<endl;
            cin>>a;
            cout<<"give the value of b : "<<endl;
            cin>>b;
        }
     
};
class operation : public simplecalci{
    public:
    void add(void){
        cout<<"the sum "<<a<<"+"<<b<<" is : "<<a+b;
    }
};
int main(){
    operation adt;
    adt.getdata();
    adt.add();


    return 0;
}

#include<iostream>
using namespace std;
class student{
    private:
    int a,b,c;

    public:
    int d,e;
    void setdata(int a ,int b, int c);
    void getdata(){
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        cout<<"the value of c is : "<<c<<endl;
        cout<<"the value of d is : "<<d<<endl;
    }

};
void student::setdata(int a1 , int b1 ,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    student kshitij;
    kshitij.d=99;
    kshitij.setdata(6,8,9);
    kshitij.getdata();

    return 0;
}
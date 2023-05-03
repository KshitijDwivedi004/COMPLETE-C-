#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name , gender;
    int roll_no, Class;
    void setdata(string name, string gender, int roll_no , int Class);
    void getdata(){
        cout<<"your name is     : "<<name<<endl;
        cout<<"you are          : "<<gender<<endl;
        cout<<"your roll no. is : "<<roll_no<<endl;
        cout<<"your class is    : "<<Class<<endl;1
    }

};
void student::setdata(string n, string g, int rn , int Cl){
    name = n;
    gender = g;
    roll_no=rn;
    Class=Cl;
}
int main(){
    student kshitij;
    kshitij.setdata("kshitij","male",064,12);
    kshitij.getdata();
    
    return 0;
}
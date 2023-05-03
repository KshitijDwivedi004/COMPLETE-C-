#include <iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setid(void){
        cout<<"enter the id of employee : ";
        cin>>id;
    }
    void showid(void){
        cout<<"the id of employee is :" <<id<<endl;
    }
};
int main(){
    
    employee raj[5];
    // raj.setid();
    // raj.showid();
    for(int i=0;i<5;i++){
        raj[i].setid();
        raj[i].showid();
    }


    return 0;
}

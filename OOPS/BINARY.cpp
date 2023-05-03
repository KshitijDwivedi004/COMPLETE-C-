#include <iostream>
using namespace std;
class binary{
    public:
    string bin;
    void get_bin(){
        cout<<"enter binary no. :";
        cin>>bin;
    }
    void check_bin(){
        for(int i=0;i<bin.length();i++){
            if(bin.at(i) != '0' && bin.at(i)!= '1'){
                cout<<"invalid input";
                cout<<endl;
                exit(0);
            }
        }
    }
    void ones_compilement(){
        for(int i=0;i<bin.length();i++){
            if(bin.at(i)=='1'){
                bin.at(i)='0';
            }
            else
            bin.at(i)='1';
        
    }}
    void display(){
        for(int i=0;i<bin.length();i++){
            cout<<bin.at(i)<<" ";
    }cout<<endl;
    }

};
int main(){
    binary d;
    d.get_bin();
    d.check_bin();
    d.display();
    d.ones_compilement();
    d.display();

    return 0;
}

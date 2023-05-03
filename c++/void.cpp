#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    
   
    cout<<"enter the first number"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    c=a+b;
     cout<<"the sum of two number is :-"<<endl;
    cout<<c<<endl;
    if(c>50){
        cout<<"you are pass"<<endl;
        }    
        else{
            cout<<"you are fail"<<endl;
        }
    return 0;
}
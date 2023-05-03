#include <iostream>
using namespace std;
int main(){
    int arr[5]={34,74,22,65,44};
    int i=10;
    int*p=&i;
    int**q=&p;

    cout<<i<<endl;
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;

    

    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<arr<<endl;


    return 0;
}

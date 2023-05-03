#include <iostream>
using namespace std;
int main(){
    int  arr[5]={1,523,36,34,5};
    char c[6]="abcde";
    int *p=&arr[0];
    cout<<c<<endl;
    char*cp =&c[0];
    cout<<cp<<endl;
    cout<<*(p+1)<<endl;
    cout<<arr<<endl;
    cout<<*(arr+1 );


    return 0;
}

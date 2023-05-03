#include <iostream>
#include <cmath>
using namespace std;
int main(){
    // method 1 ***********


    // int n,i=0,r=0;
    // cin>>n;
    // while(n!=0){
    //     int bit= n&1;
    //     r=(bit*pow(10,i))+r;
        
      
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"ans is : "<<r;

    // ?method 2
    int n;
    int ans=0;
    cin>>n;
    while(n!=0){
        int i=0;
        ans=((n%2)*pow(10,i)) + ans;
        n=n/2;
        i++;


    }cout<<ans;
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    // int *arr=new int[5];
    int arr[8]={1,0,2,1,0,1,2,0};
    int s=0,e=7;
    while(s<e){
        if(arr[s]==2){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        if(arr[e]==0){
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        
        }

    cout<<"ans is: ";
    for(auto x:arr){
        cout<<x;
    }


    return 0;
}
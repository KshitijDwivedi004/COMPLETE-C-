#include <iostream>
using namespace std;
int main(){
    //  ****  for increasing run form 1 -> i   && for decreasing run form i -> n;  ****
    int n = 5;
    for(int i = 1 ; i<=n ; i++){
    //     for (int j =i ; j <=n; j++) //decreasing triangle
    //     {
    //         cout<<" ";
    //     }for(int j = 1 ; j<i; j++){
    //         cout<<"*";
    //     }for(int j = 1 ; j<=i; j++){
    //         cout<<"*";
    //     }
        for(int j = 1 ; j<=i; j++){ //increasing triangle
            cout<<"   ";
        }for (int j =i ; j <n; j++) //decreasing triangle
        {
            cout<<" * ";
        }for (int j =i ; j <=n; j++) //decreasing triangle
        {
            cout<<" * ";
        }





        cout<<endl;
        
    }


    return 0;
}

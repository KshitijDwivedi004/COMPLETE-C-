// #include <bits/stdc++.h>
// using namespace std;

// void printRowsum(int arr[][3],int s){
//     for(int i=0;i<s;i++){
//     int sum=0;
//         for(int j=0;j<s;j++){
//             sum+=arr[i][j];
//         }cout<<sum<<"\n";
//     }
// }
// void largestRowSum(int arr[][3],int s){
//     int maxi=0;
//     for(int i=0;i<s;i++){
//     int sum=0;
//         for(int j=0;j<s;j++){
//             sum+=arr[i][j];
//         }maxi=max(sum,maxi);
//     }cout<<maxi;
// }
// int main(){
// int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
// printRowsum(arr,3);
// largestRowSum(arr,3);
// cout<<endl;

// int t=3;


// for(int i=1 ; i<=t ;  i++){
//     for(int j=1 ; j<=t-i+1 ; j++){
//         cout<<"* ";
//     }for(int j=1; j<=2*i-1;j++){
//         cout<<" ";
//     }for(int j=1;j<=t-i+1;j++){
//         cout<<"* ";
//     }cout<<endl;
// }
// for(int i=t ; i>=1 ;  i--){
//     for(int j=1 ; j<=t-i+1 ; j++){
//         cout<<"*";
//     }for(int j=1; j<=2*i-1;j++){
//         cout<<" ";
//     }for(int j=1;j<=t-i+1;j++){
//         cout<<"*";
//     }cout<<endl;
// }














// return 0;
// }

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    cout<<"Hello World \n";
    int arr[5]={34,74,12,33,22};
    int sum=accumulate(arr,arr+5,100);
    cout<<sum;

    return 0;
}
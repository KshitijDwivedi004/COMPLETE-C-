#include <iostream>
using namespace std;
void printarr(char arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    char arr[]="Welcome";
    int s=sizeof(arr);
    cout<<s<<endl;
    for(int i=0;i<s;i++){
        // if(arr[i]>64 && arr[i]<90){            //for UPPER --> LOWER CASE
        //     arr[i]+=32;
        // }
         if(arr[i]>='a' && arr[i]<='z'){    //FOR LOWER --> UPPER CASE
            arr[i]-=32;
        }
    }
    printarr(arr,s);



    


    return 0;
}


// #include <bits/stdc++.h>
// void sort012(int *arr, int n)

// {
//     int i=0;
//     int j=n-1;
//     while(i<j) {
//         if(arr[i]==2) {
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         } else if(arr[i]>arr[j] && i<j) {
//             swap(arr[i],arr[j]);
//         } else if(arr[i]<arr[j] && i<j) {
//             i++;
//             j--;
//         } else i++;
//     }
//     for(int i=0; i<n-1; i++) {
//         if(arr[i]>arr[i+1]) {
//             swap(arr[i],arr[i+1]);

//         }
//     }cout<<endl;
// }
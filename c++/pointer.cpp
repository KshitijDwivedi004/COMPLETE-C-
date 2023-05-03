#include <bits/stdc++.h>
using namespace std;
int main(){
    // int arr[5]={4,6,9,5,1};
    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<&arr<<endl;
    // cout<<sizeof(&arr[0])<<endl;
    // cout<<sizeof(arr)<<endl;

    int i=10;
    int *p=&i;
    // string str;
    cout<<sizeof(i)<<endl;
    cout<<sizeof(&i)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;
    return 0;
}

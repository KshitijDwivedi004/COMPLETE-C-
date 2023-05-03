// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// // string to int conversion ,method 1
// string str="123";
// int c=stoi(str);
// cout<<c<<endl;

// // method 2
// string str2="2222";
// int i,j;
// stringstream ss;
// ss<<str2;
// ss>>i;
// cout<<i;
// string str3="2222";
// stringstream(str)>>j;
// cout<<"\n"<<j;

// // convert from int -> string

// int x=64;
// string str4=to_string(x);
// cout<<"\n"<<str;

// return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int ans=0;
    for(int i=1;ans<t;i++){
        
        if(ans == t){
            cout<<"yes";
            return 0;
        }
        if(ans > t){
            cout<<"no";
            return 0;
        }
        ans+=i;
        }cout<<"no";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
int n;
cin>>n;
while(n--){
int x;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}int sum=0;
for(int i=0;i<x;i++){
    sum+=arr[i];
    }

    if(sum==0){
        cout<<"0"<<endl;}
    else if(sum%2==0){
        cout<<sum/2<<endl;
        
    }
        else{
        cout<<"-1"<<endl;
        }
    
}
    
    
    
    
    

	return 0;
}

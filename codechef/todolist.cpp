// #include <iostream>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int a;
// 	    cin>>a;
// 	    int arr[a];
// 	    for(int x=1;x>a;x++){
// 	        cin>>arr[a-1];
// 	}}
// 	for(int y=1;y>a;y++){
// 	    if(arr[y-1]>=1000){
// 	        int ans=0;
// 	        ans=ans+1;
// 			cout<<ans;
// 	    }
// 	}
	
// 	return 0;
// }
#include <iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int a;cin>>a;
		int ans=0;
		while (a--)
		{
			int b;cin>>b;
			ans+=(b>=1000);
			
		}cout<<ans<<endl;
		
	}


	return 0;
}






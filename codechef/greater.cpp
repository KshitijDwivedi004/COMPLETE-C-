#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int a,b,d,ans1,ans2;cin>>a>>b;
	    d=(a+b);
	    ans1=(500-a*2)+(1000-d*4);
	    ans2=(1000-b*4)+(500-d*2);
	    cout<<max(ans1,ans2)<<endl;
	    
	}
	
	
	
	return 0;
}

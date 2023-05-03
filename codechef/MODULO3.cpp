#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
	int x,y,z;
	while(t--){
	    cin>>x,y,z;
	    if(z>=x && z<y){
	        cout<<"YES"<<endl;
	    }
	    else{
	    cout<<"NO"<<endl;
        }
	}
	return 0;
}

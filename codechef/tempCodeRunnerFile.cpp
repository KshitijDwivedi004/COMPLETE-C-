#inclued <iostream>
using namespace std;
int main() {
	int t,x,count;
	cin>>t;
	while(t--){
        cin>>x;
	    while(x >0){
	        if (x%10==4){
	            count+=1;
	        }
	        x=x/10;
	        
	        
	    }cout<<count<<endl;
	    
	}
	return 0;
}

#include <iostream>
using namespace std;
int main(){
    int test_case;
    cin>>test_case;
    int vid[test_case];
    int ans=0;
   for (int a=1; a <= test_case; a++){
   
       cin>>vid[a-1];
       if (vid[a-1]!=vid[a])
       {
           ans=ans+1;
       }
       cout<<ans;
   }



    return 0;
}
#include <iostream>
using namespace std;
bool pali(string str,int s,int e){
    if(s>=e) return true;
    return ((str[s]==str[e]) && pali(str,s+1,e-1));

}

int main(){
    
    string str;
    str="1221";
    cout<<pali(str,0,str.length()-1);
    return 0;
}

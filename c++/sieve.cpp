#include <iostream>
using namespace std;
void sprime(int n){
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;

}
int main(){
    int n;
    cin>>n;
    sprime(n);

    return 0;
}

// #include <iostream>

// using namespace std;
// void isprime(int n){
//     int prime[1000]={0};
//     for(int i=2;i*i<=n;i++){
//         if(prime[i]==0){
//             for(int j=i*i;j<=n;j+=i){
//                 prime[j]=1;
//             }
//         }
//     }if(prime[n]==0){
//         cout<<"this is prime";
//     }
//         else
//         {
//             cout<<"this is not prime";
//         }
// }

// int main()
// {
//     cout<<"Hello World"<<endl;
//     isprime(19);

//     return 0;
// }
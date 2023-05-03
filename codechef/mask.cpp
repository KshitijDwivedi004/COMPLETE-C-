#include <iostream>
using namespace std;
int main(){
    int t_condition;
    cin>>t_condition;
    while(t_condition --){
        int disp;
        int cl,d_p,cl_p;
        cin>>disp;
        cin>>cl;
        d_p=(disp*100);
        cl_p=(cl*10);
        if (cl_p >d_p)
        {
            cout<<"Disposable"<<endl;
        }
        else if (cl_p < d_p)
        {
            cout<<"Cloth"<<endl;
        }
        
        else
        cout<<"Cloth"<<endl;
    }





    return 0;
}
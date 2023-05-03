#include <iostream>
using namespace std;
class animal{
    public:
    int age;
    int weigh;

    void speak(){
        cout<<"you speak hindi"<<endl;

    }
    void weight(){
        cout<<"enter your weight :";
        cin>>this->weigh;
        cout<<"your weight is :"<<weigh<<endl;
    }
};
class dog : public animal{
    public:
    void age(int n){
        cout<<n<<endl;
    }
  
};
class bird : public dog{
    public:
    void fly(){
        cout<<"bird can fly"<<endl;
    }
};
int main(){
    dog pet;
    pet.weight();
    pet.speak();
    pet.age(19);
    bird pigeon;
    pigeon.fly();
    pigeon.speak();
    


    return 0;
}

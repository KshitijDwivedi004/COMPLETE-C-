#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class hero {
    private:
    int health;
    public:
    string level;
    char *name;
    
    hero(){
        cout<<"constructer called"<<endl;
        name = new char[50];
    }

    int gethealth(){
        return health;
    }
    string getlevel(){
        return level;
    }
    void sethealth(int health){
         this->health = health;
    }
    void setlevel(string level){
        this->level=level;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }
    char getname(){
        return this->name;
    }

};

int main()
{   char name[8]="kshitij";
    hero h1;
    h1.sethealth(85);
    h1.setlevel("ACE");
    h1.setname(name);
    cout<<h1.gethealth()<<endl;
    cout<<h1.getlevel()<<endl;
    cout<<h1.getname()<<endl;
    // hero h2(h1);
    // h2.sethealth(60);
    // cout<<h2.gethealth();

    return 0;
}
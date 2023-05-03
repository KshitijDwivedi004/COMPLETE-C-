#include <iostream>
using namespace std;
class hero
{
public:
    char level;
    int health;
    static int getscore;
    // hero(){
    //     cout<<"constructor called"<<endl;
    // }
    int gethealth(void)
    {
        return health;
    }
   
    // void sethealth(int health){
    //     this->health=health;
    // }
    char getlevel(void)
    {
        return level;
    }
    // void setlevel(int l){
    // level = l;
    // }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // hero(hero& temp){
    //     char *l= new char[1];
    //     strcpy(l,temp.level);
    //     this->level=l;

    //     this->health=temp.health;

    // }
    void print(void)
    {
        cout << "level = " << level << " || "
             << "health = " << health << endl;
    }
    
};
    int hero::getscore=4;
int main()
{
    hero kevin(87, 'a');
    hero dell(kevin);
    kevin.print();
    dell.print();
    kevin.level = 'c';
    kevin.print();
    dell.print();
    cout<<hero::getscore<<endl;

    // static
    //  hero hanuman;
    //  hanuman.setlevel(10);
    //  cout<<"your level is : "<<hanuman.getlevel()<<endl;
    //  hanuman.sethealth(100);
    //  cout<<"your health is : "<<hanuman.gethealth()<<endl;
    //  //dynamic
    //  hero *r=new hero;
    //  r->setlevel(10);
    //  cout<<r->getlevel()<<endl  ;
    //  r->sethealth(100);
    //  cout<<r->gethealth();

    return 0;
}

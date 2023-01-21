#include<iostream>
using namespace std;

class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<< level <<endl;
    }
    // getters && setters 
    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};

int main(){
    //STATIC ALLOCATION
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;
    
    //Dynamically
    Hero *b = new Hero;

    b->setHealth(70);
    b->setLevel('A');

    cout<<"Level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;
         //or
    cout<<"Level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;
    
    /*
    //creation of a object
    Hero hula;
    cout<<"hula health is "<<hula.getHealth()<<endl;

    hula.setHealth(70);

    // hula.health = 70;
    hula.level ='A';

    cout<<"Health is : "<<hula.getHealth()<<endl;
    cout<<"level is : "<<hula.level<<endl;

    // cout<<"Size : "<<sizeof(h1)<<endl;
    */

} 
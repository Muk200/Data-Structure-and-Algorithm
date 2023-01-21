#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"Constructor called "<<endl;
    }
    //parameterised constructor
    Hero(int health){
      this -> health = health;
    }
    Hero(int health, char level){
      this -> health = health;
      this -> level = level;
    }
    //"this" stores ADDRESS OF CURRENT OBJECT eg- Hero pkmn
    //"this -> health" is the health described in thhe class

    // "health" is the one which we gave a input to 


    //copy constructor 
    Hero(Hero& temp){
      cout<<"Constructor called "<<endl;
      this->health = temp.health;
      this->level = temp.level;
    }

    void print(){
        cout<< level <<endl;
    }
};

int main(){

  Hero erenn(70,'C');
  erenn.print();

  //copy constructor 
  Hero R(erenn);
  R.print();

    //object created dynamically
    Hero pkmn(10);
    // cout<<"Address of pkmn "<<&pkmn<<endl;
    
    //dyanmically
    Hero *h = new Hero(11);
    //after creating constructor manually, the default/inbuilt one disappears
    Hero temp(22,'B');
    temp.print();
}
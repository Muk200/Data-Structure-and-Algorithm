#include<iostream>
#include <cstring>
using namespace std;
class Hero{
    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete; //static keyword

    Hero(){
        cout<<"Constructor called "<<endl;
        name = new char[100];
    }
    //parameterised constructor
    Hero(int health){
      this -> health = health;
    }
    Hero(int health, char level){
      this -> health = health;
      this -> level = level;
    }
    void print(){
        cout<<endl;

        cout << "[ Name: " << this->name<< " ,";
        cout << "health: " << this->health << " ,";
        cout <<"level: " << this->level << " ]";

        cout<<endl<<endl;
    }
    
    //copy constructor -> deep copy
    Hero(Hero& temp){

      char *ch = new char[strlen(temp.name) + 1];
      strcpy(ch, temp.name);
      this ->name =ch;

      cout<<"Constructor called "<<endl;
      this->health = temp.health;
      this->level = temp.level;
    }
    

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
    
    void setName(char name[]){
        strcpy(this->name, name);
    }
    
    static int random(){
        return timeToComplete; 
    }

    //Destructor
    ~Hero(){
        cout<<"Destructor working"<<endl;
    }
    
};

int Hero::timeToComplete = 5; 

int main(){
   cout<<endl;


   cout<<Hero::timeToComplete<<endl; //without creating object
   cout<<Hero::random()<<endl;

   //can be accessed through object but NOT RECOMMENDED
   Hero c;
   cout<<c.timeToComplete<<endl;

   //static
   Hero a;

   //dynamic
   Hero *b = new Hero();
   //manually destructor
   delete b;
   
  
    Hero don;
    don.setHealth(20);
    don.setLevel('D');
    char name[7] = "Muskan";
    don.setName(name);

    //don.print();

    //use default copy constuctor -> shallow copy 
    Hero don2(don);
    don2.print();

    don.name[0] = 'G';
    don.print();

    //don2.print();
    
    //copy assignment
    don = don2;

    don.print();
    don2.print();




   cout<<endl;
}
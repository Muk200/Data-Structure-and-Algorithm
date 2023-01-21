#include<iostream>
using namespace std;

// Run time polymorphism -> METHOD OVERIDING

class Animal{
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{
   public:
    void speak(){
        cout<<"Barking "<<endl;
    } 
};

int main(){

    Dog obj;
    obj.speak();
}
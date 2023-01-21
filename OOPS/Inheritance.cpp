#include<iostream>
#include <cstring>
using namespace std;

class Human{

    protected:
    int height;

    public:
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<" I'm sleepy "<<endl;
    }
    
    int getHeight(){
        return this->height;
    }
};

int main(){

    Male m1;
    cout<< m1.getHeight();
    // cout<<m1.height<<endl;



    /*
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;

    cout<<obj1.color<<endl;
    obj1.setWeight(60);
    cout<<obj1.weight<<endl;

    obj1.sleep();
    */


}

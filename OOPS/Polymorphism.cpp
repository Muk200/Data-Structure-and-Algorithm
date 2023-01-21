#include<iostream>
using namespace std;

//compile time polymorphism --> FUNCTION OVERLOADING

class A{
    public:
    void sayHello(){
        cout<<" Hello  Muskan "<<endl;
    }

    void sayHello(string name){
        cout<<" Hello "<<name<<endl;
    }
    int sayHello(string name,  int n){
        cout<<" Hello  Muskan "<<endl;
        return n;
    }
    void sayHello(char name){
        cout<<" Hello "<<name<<endl;
    }
};

//OPERATOR OVERLOADING
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this ->a;
        int value2 = obj.a;
        cout<<" Output "<< value2 - value1<<endl;
    }

    void operator() (){
        cout<<"hello how do u do? "<< this->a <<endl;
    }
};

int main(){
    cout<<endl;


    /*
    A obj;
    obj.sayHello();
    */

    cout<<endl;

    B obj1, obj2;
    obj1.a =4;
    obj2.a =7;
     
    
    obj1 + obj2;
    obj1();


    cout<<endl;

}

// polymorphism -> existing in many forms
// can only work when we change in "input argument"
// compile time --> static polymorphism
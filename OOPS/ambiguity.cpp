#include<iostream>
using namespace std;

class A{
    public:
    void fnc(){
        cout<<" I am A "<<endl;
    }
};

class B{
    public:
    void fnc(){
        cout<<" I am B "<<endl;
    }
};

class C: public A, public B{

};

int main(){
    cout<<endl;




    C obj;
    //obj.fnc();

    obj.A::fnc();
    obj.B::fnc();



    cout<<endl;

}
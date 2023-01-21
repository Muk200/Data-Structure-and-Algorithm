#include<iostream>
using namespace std;

//Hybrid inheritance
class A{
    public:
    void fnc1(){
        cout<<"Inside fucntion 1 "<<endl;
    }
};

class B: public A{
    public:
    void fnc2(){
        cout<<"Inside fucntion 2 "<<endl;
    }
};

class D{
    public:
    void fnc4(){
        cout<<"Inside fucntion 4 "<<endl;
    }
};


class C: public A, public D{
    public:
    void fnc3(){
        cout<<"Inside fucntion 3 "<<endl;
    }
};
// here for C -> A is hierarchical && C -> D is multiple

int main(){

    cout<<endl;




    A obj1;
    obj1.fnc1();

    cout<<endl;

    B obj2;
    obj2.fnc1();
    obj2.fnc2();

    cout<<endl;

    C obj3;
    obj3.fnc1();
    obj3.fnc3();
    obj3.fnc4();




    cout<<endl;
}


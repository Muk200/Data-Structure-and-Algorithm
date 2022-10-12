#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l;
    
    //to copy in a new list
    list<int>n(l);
    list<int>n(5,100);

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"After erase "<<endl;

    for(int i:l){
        cout<<i<<endl;
    }

    cout<<"Size of list "<<l.size()<<endl;
    
}
#include<iostream>
#include<set>
using namespace std;
int main(){

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);


    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;
    
    //taking out the iterator
    set<int>::iterator it = s.begin();
    it ++;

    s.erase(it);

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;
    
    cout<<"is 5 present or not "<<s.count(5)<<endl;
    cout<<"is -5 present or not "<<s.count(-5)<<endl;
    
    //returns an iterator which points to the position of the element which is searched
    set<int> :: iterator itr = s.find(5);
    cout<<"value present at itr "<<*itr<<endl;
    
    //to print the next value 
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<endl;
    }

    
}
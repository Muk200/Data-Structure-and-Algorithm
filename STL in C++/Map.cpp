#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int, string> m;

    m[1] = "data";
    m[2] = "in";
    m[13] = "key";
   
   //another way to insert
    m.insert({5,"value"});

    cout<<"before erase"<<endl;

    //way to print
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //count()
    cout<<"finding 13 -> "<<m.count(13)<<endl;
    cout<<"finding -13 -> "<<m.count(-13)<<endl;
    
    cout<<endl;

    //erase()
    m.erase(13);
    cout<<"after erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    
    auto it =m.find(5);

    for(auto i =it; i!=m.end(); i++){
        cout<<(*i).first<<endl;
    }

}
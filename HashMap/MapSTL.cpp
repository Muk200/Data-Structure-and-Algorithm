#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    //creation
    unordered_map<string,int> m;

    //INSERTION
        //way 1
    pair<string,int> p = make_pair("muskan", 3);
    m.insert(p); 

        //way2
    pair<string,int> pair2("Pasricha", 2);

        //way3
    m["mera"] = 1;

    //what will happen -> ist time creation, 2nd time updation
    m["mera"] = 4;

    //SEARCHING
    cout<<m["mera"] <<endl; //way1
    cout<< m.at("muskan") <<endl; //way2

    //accesing a key which wasn't made -> error && makeing a key without mapping it's value -> 0

    cout<< m["unknownKey"] <<endl; //creation of a empty key
        //accessing that empty key without creation this can't be done
    cout<< m.at("unknownKey") <<endl; 

    //SIZE
    cout<<m.size()<<endl;

    //TO CHECK PRESENCE
    cout<<m.count("muskan")<<endl;

    //TO ERASE
    cout<<m.erase("Pasricha")<<endl;
    cout<< m.size() <<endl;

    //TO ACCESS ENTIRE ELEMENT
        //by loop
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

        //by iterator
    unordered_map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<< it->first <<" "<<it->second<<endl;
        it++;
    }
    return 0;
}
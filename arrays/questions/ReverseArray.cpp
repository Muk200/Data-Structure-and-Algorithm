#include<iostream>
#include<vector>
using namespace std;

// a fnc reverse 
vector<int> reverse(vector<int> v){

    int s =0, e =v.size() -1;

    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

// a fnc to print
void print(vector<int> v){

    for(int i =0; i<v.size(); i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
}


int main(){
    
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    
    //made a fnc which reverse an vector
    vector<int> ans = reverse(v);
    
    cout<<"Printing reverse Array "<<endl;
    
    //print fnc
    print(ans);
    
    
    return 0;
}
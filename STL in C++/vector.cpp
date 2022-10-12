#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v;

    //another way to intialise when size is unkown
    //in (5,1) 5 means total length 1 means all element starting from
    vector<int> a(5,1);
    cout<<"Print a "<<endl;
    for(int i:a){

        cout<<i<<" ";
    }cout<<endl;

    //to copy one vector to another
    vector<int> last(a);
    cout<<"Print last "<<endl;
    for(int i:last){

        cout<<i<<" ";
    }cout<<endl;


    //size means current no of elemnts
    //capacity means total memory allocated 
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

    // we can give in value by ".pushback()"
    v.push_back(2);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity-> "<<v.capacity()<<endl;

    cout<<"size-> "<<v.size()<<endl;

    cout<<"Element at 2nd Index : "<<v.at(2)<<endl;

    //first and last element
    cout<<"Empty or not"<<"  "<<v.front()<<endl;
    cout<<"Empty or not"<<"  "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    //loop way
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear "<<v.size()<<endl;
    v.clear();
    cout<<"After clear "<<v.size()<<endl;

}  
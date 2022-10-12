#include<iostream>
#include<array>
using namespace std;
int main(){

    //normal way
    int basic[3] = {1,2,3};
    //stl way
    array<int,4>a ={1,2,3,4};

    int size = a.size();
    //simple traverse 
    for(int i=0; i<size;i++){
        cout<<a[i]<<endl;
    }

    //by using at 
    cout<<"Element at 2nd Index : "<<a.at(2)<<endl;

    cout<<"Empty or not"<<"  "<<a.empty()<<endl;

    //first and last element
    cout<<"Empty or not"<<"  "<<a.front()<<endl;
    cout<<"Empty or not"<<"  "<<a.back()<<endl;
}
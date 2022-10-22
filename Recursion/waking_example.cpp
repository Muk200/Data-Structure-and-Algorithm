#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    
    cout<<"source "<<src<<" destination "<<dest<<endl;

    //base case
    if(src == dest){
        cout<<"You have reached your destination :)"<<endl;
        return ;
    }


    //processing
    src++;
    
    //recursive call
    reachHome(src, dest);
}

int main(){
    
    cout<<"FINAL DESTINATION"<<endl;

    int dest =10;
    int src =1;

    cout<<endl;

    reachHome(src, dest); 

    cout<<endl;
}
#include<iostream>
#include<queue>
using namespace std;
int main(){

    //Max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
  

   //for maximum
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n =maxi.size();
    //don't write "i<maxi.size()" bc it changes the size everytime

    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
 


    //for minimum
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m =mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl; 

   cout<<"Empty or not "<<maxi.empty()<<endl;
   cout<<"Empty or not "<<mini.empty()<<endl;




}
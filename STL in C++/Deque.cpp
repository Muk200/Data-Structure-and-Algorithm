#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    
    cout<<endl;
    /*
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    */

   //to print the first element
   cout<<"Print first index element "<<d.at(1)<<endl;
 
   //to see elements from front and back
   cout<<"Front "<<d.front()<<endl;
   cout<<"back "<<d.back()<<endl;

   cout<<"Empty or not "<<d.empty()<<endl;

   cout<<"Before erase "<<d.size()<<endl;

   //we have to mention ther area from where we want to erase 
   d.erase(d.begin(),d.begin()+1);
   cout<<"after erase "<<d.size()<<endl;

}
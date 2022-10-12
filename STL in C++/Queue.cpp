#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string> q;

    q.push("first");
    q.push("in");
    q.push("first");
    q.push("out");

   cout<<"Front "<<q.front()<<endl;
   q.pop();
   cout<<"Front "<<q.front()<<endl;
   
   cout<<"Size after pop "<<q.size()<<endl;

}
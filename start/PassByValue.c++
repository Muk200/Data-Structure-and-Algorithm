// PASS BY VALUE EXAMPLE 

#include<iostream>
using namespace std;
void dummy(int n){

    n++; 
    cout <<"n is "<< n <<endl;

    // this fnc increases the value by "n++;" and prints it 
}

int main(){
   
   //but this fnc has the same value without any code to increment it so prints as it is 
    int n;
    cin>>n;

    dummy(n);
    cout<<"number n is  "<< n <<endl;


    return 0;
}
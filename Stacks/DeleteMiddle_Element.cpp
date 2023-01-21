#include <bits/stdc++.h> 
#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    //base case
    if(count  == size/2){
        inputStack.pop();
        return;
    }
    //keep top element aside
    int num = inputStack.top();
    inputStack.pop();
    
    //recursive call
    solve(inputStack, count+1, size);
    
    inputStack.push(num); //push the element you poped earlier
}
void deleteMiddle(stack<int>&inputStack, int N){
	
    int count = 0;
    solve(inputStack, count , N);
   
}
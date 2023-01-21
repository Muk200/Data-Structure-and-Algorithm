#include <bits/stdc++.h> 
void sortedInsert(stack<int> &stack, int num){
    //base case
    if(stack.empty() || (!stack.empty() && stack.top() < num)){
        stack.push(num);
        return;
    }
    int n = stack.top();
    stack.pop();
    
    //recursive call
    sortedInsert(stack, num);
    
    stack.push(n); // jo element nikala tha vapis daal do usko
}
void sortStack(stack<int> &stack)
{
	//base case
    if(stack.empty()){
        return;
    }
    
    int num = stack.top();
    stack.pop();
    
    //recursive call
    sortStack(stack);
    
    sortedInsert(stack, num); //insert in sorted way 
}
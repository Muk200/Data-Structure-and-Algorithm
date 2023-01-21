#include <bits/stdc++.h> 
//similar to delete middle
void solve(stack<int>& s, int x){
    
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }
    //keep top element aside
    int num = s.top();
    s.pop();
    
    //recursive call
    solve(s, x);
    
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack, x);
    return myStack;
}

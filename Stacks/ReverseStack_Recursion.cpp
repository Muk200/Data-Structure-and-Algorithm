#include <bits/stdc++.h> 
void insertAtBottom(stack<int> &s, int element) {

    //basecase
    if(s.empty()) {
        s.push(element);
          return ;
    }
    
    //keep top element aside
    int num = s.top();
    s.pop();
    
    //recursive call
    insertAtBottom(s, element);
    
    s.push(num);
}

void reverseStack(stack<int> &stack) {
      //base case
    if(stack.empty()) {
        return ;
    }
    
    //keep top element aside
    int num = stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtBottom(stack,num); //insert element at bottom after reversal
}
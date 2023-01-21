queue<int> modifyQueue(queue<int> q, int k) {
    
    //first k elements from QUEUE -> stack
    stack<int> s;
    
    for(int i=0; i<k; i++){
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    //then take element from STACK -> QUEUE
    
    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
    }
    
    //take first n-k from QUEUE AND PUSH_BACK
    int t =q.size() - k;
    
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
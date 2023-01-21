class Solution {
public:
    int evalRPN(vector<string>& tokens) { 
        stack<long long int> stk;  
        for(auto s: tokens){
            if(s.size() == 1 && !isdigit(s[0])){ // operator
                long long int n2 = stk.top(); stk.pop();
                long long int n1 = stk.top(); stk.pop();
                if(s[0] == '+') stk.push(n1 + n2);
                if(s[0] == '-') stk.push(n1 - n2);
                if(s[0] == '*') stk.push(n1 * n2);
                if(s[0] == '/') stk.push(n1 / n2);
            }else stk.push(stoi(s));             
        }
        
        return stk.top();   
    }
};
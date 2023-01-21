class MyQueue {
   stack < int > input, output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        // shift input to output 
     if (output.empty()){
        while (input.size()){
            output.push(input.top()), input.pop();
        }
       
    }
    int x = output.top();
    output.pop();
    return x;
    }
    
    int peek() {
       if(output.empty()){
           while(input.size()){
               output.push(input.top());
               input.pop();
           }
       } 
       return output.top();
    }
    
    bool empty() {
        if(input.empty() && output.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
Intuition
construct two stacks and shift them from one to another for time complexity O(1)

Approach
using two stacks where push operation is O(1)
shifting from one to another will be used in pop() and peek()
For pop() store the answer before poping it and then return answer

Complexity
Time complexity: O(1)
Space complexity: O(2n)

https://takeuforward.org/data-structure/implement-queue-using-stack/

 */
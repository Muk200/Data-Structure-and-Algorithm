#include <bits/stdc++.h> 
class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        /if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        } 
        else{
            cout<<"Stack overflow ";
        }.
    }

    // Push in stack 2.
    void push2(int num) {
        //check space avalibility (atleast one empty space)
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        } 
        else{
            cout<<"Stack overflow ";
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < s){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
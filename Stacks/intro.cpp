#include<iostream>
using namespace std;
#include<stack>

class Stack {
    //properties
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push( int element) {
        //check space avaliable ?
        if(size - top > 1) {
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop() {
        //check element present ?
        if(top >=0 ) {
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
    }

    int peek() {
        //if not empty
        if(top >=0 )
            return arr[top];
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty() {
        if( top == -1) {
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    if(st.isEmpty()) {
        cout << "Stack is Empty " << endl;
    }
    else{
        cout << "Stack is not Empty " << endl;
    }

    /*
    cout<<endl;
    //creation of stack 
    stack<int> s;
    //push operation
    s.push(2);
    s.push(3);
    s.push(4);
    //pop operation
    s.pop();

    cout<<"printing top element "<<s.top()<<endl;
    if(s.empty())
        cout<<"Stack is empty "<<endl;
    else{
        cout<<"Stack is not empty "<<endl;
    }
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<endl;
    return 0;
    */

   //IMPLEMENTATION OF STACK - ARRAY OR LINKED LIST
} 
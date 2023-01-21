#include<iostream>
#include<queue>
using namespace std;

int main(){

    cout << (-1)%1<< endl;
    deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();

    if(d.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty " << endl;
    }
}

#include <bits/stdc++.h> 
class Deque
{
    //decleartion
    int *arr;
    int front;
    int rear;
    int size;
public:
    //initialisation
    Deque(int n)
    {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //FULL OR NOT
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) )
            return false;
        //first element
        else if(front == -1)
            front = rear =0;
        //to cyclic nature maintain
        else if(front == 0 && rear != size - 1)
            front = size-1;
        //normal
        else
            front--;
        
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        //FULL OR NOT
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) )
            return false;
        //first element
        else if(front == -1)
            front = rear =0;
        //cyclic nature
        else if(rear == size-1 && front != 0)
            rear = 0;
        //normal 
        else
            rear++;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        //to check queue is empty
        if(front == -1)
            return -1;
       
         //single element is present
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) 
            front = rear = -1;
        
        //to maintain cyclic nature
        else if(front == size - 1) 
            front = 0; 
        
        else
        //normal flow
            front++;
        
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    { 
        //to check queue is empty
        if(front == -1)
            return -1;
        
         //single element is present
        int ans = arr[rear];
        arr[rear] = -1;
        if(front == rear) 
            front = rear = -1;
        
        //to maintain cyclic nature
        else if(rear == 0) {
            rear = size-1; 
        }
        
        else
        //normal flow
            rear--;
        
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty())
            return -1;
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
        if(isEmpty())
            return -1;
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) )
            return false;
        else
            return false;
    }
};
#include <bits/stdc++.h> 
 class Queue {
    // Using Array
    int *arr;
    int Front;
    int Rear;
    int size;
    
public:
    Queue() {
        //the Constructor
        size = 10001;
        arr = new int[size];
        Front = Rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return Front == Rear;
    }

    void enqueue(int data) {
        if(Rear == size) //if queue is full aka rear = size or rear = n
            return;
        arr[Rear] = data;
        Rear++;
    }

    int dequeue() {
        if(Front == Rear) //if empty
            return -1;
        else{
            int dequeued = arr[Front];
            arr[Front] = -1; //since we need to empty it
            Front++;
            if(Front == Rear) //in case if any previous block was left after front++
                Front = Rear = 0;
            return dequeued;
        }
    }

    int front() {
        if(Front == Rear)//if empty
            return -1;
        return arr[Front];
    }
};
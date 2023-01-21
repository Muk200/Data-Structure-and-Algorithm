#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class heap{

    public:
    int arr[100];
    int size;

    //constructor
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){

        //insert val at end
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){

            int parent = index/2; //find parent

            //for max heap
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{ 
                return ;
            }
        }

    }

    void print(){
        for(int i =1; i<=size; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void deletefromHeap(){
        if(size == 0){
            cout<<" Nothing to delete " <<endl;
            return ;
        }

        //step 1. swap last -> ist index
        arr[1] = arr[size];

        //step2 . remove last elemnt
        size--; 

        //step3. take root to it's correct position

        int i = 1;
        while(i<size){
            int leftIndex = 2*1;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){ //left child
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if(rightIndex < size && arr[i] < arr[rightIndex]){ //right child
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }
        }
    }

};

void heapify(int arr[], int n, int i){

    //max heap
    int largest = i;
    int left = 2*i;
    int right = 2*i + 1;

    //comparing with left and right child
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    //now the updated largest
    if(largest != i){
        swap(arr[largest], arr[i]);
        //aage bhi check krene ke liye
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        //step1. swap
        swap(arr[size], arr[1]);
        size--;

        //step2
        heapify(arr, size, 1);
    }
}

int main(){

    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    cout<<"Deleting a ndoe from a heap"<<endl;
    h.deletefromHeap(); 
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50}; //don't start from ist index
    int n = 5;

    //heap creation
    for(int  i = n/2; i>0; i--){//right se loop chala rhe
        heapify(arr, n, i);
    }

    cout<<"Printing the array now "<<endl;
    for(int i = 1; i<=n; i++){
        cout<<arr[i] <<" ";
    }cout<<endl;

    //heapsort
    heapSort(arr, n);

    cout<<"Printing the array after sorted now "<<endl;
    for(int i = 1; i<=n; i++){
        cout<<arr[i] <<" ";
    }cout<<endl;

    //maxheap
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);

    cout<<"Elemnt at Top: "<<pq.top()<<endl;
    pq.pop();
    cout<<"Elemnt at Top: "<<pq.top()<<endl;

    //minheap
    priority_queue<int, vector<int>, greater<int> > minheap;

    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);

    cout<<"Elemnt at Top: "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"Elemnt at Top: "<<minheap.top()<<endl;

    return 0;
}
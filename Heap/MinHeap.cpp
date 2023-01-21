//BY USING HEAPIFY ALGO

#include <bits/stdc++.h> 
void heapify(vector<int> &arr, int n, int i){

    //max heap
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    //comparing with left and right child
    if(left < n && arr[smallest] > arr[left]){
        smallest = left;
    }
    if(right < n && arr[smallest] > arr[right]){
        smallest = right;
    }

    //now the updated largest
    if(smallest != i){
        swap(arr[smallest], arr[i]);
        //aage bhi check krene ke liye
        heapify(arr, n, smallest);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int  i = n/2-1; i>=0; i--){
        heapify(arr, n, i);
    }
    return arr;
}

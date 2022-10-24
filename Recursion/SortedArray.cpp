//TO CHECK IF ARRAY IS SORTED OR NOT (RETURN TRUE OR FALSE)

bool isSorted(int *arr, int size){

    //base case
    //if arr has 1 or no value then it's already sorted
    if(size ==0 || size==1)
        return true;
    
    //not sorted ->  0th index > ist index value 
    if(arr[0] > arr[1]) 
        return false;
    
    //recursive relation
    else{
        int remaningPart= isSorted(arr+1, size-1);
        return remaningPart;
    }
}

#include<iostream>
using namespace std;

int main(){

    int arr[5] = {2,4,7,8,9};
    int size =5;

    bool ans = isSorted(arr, size);

    if(ans){
        cout<< "Array is sorted";
    }
    else{
        cout<<"not sorted";
    }
}
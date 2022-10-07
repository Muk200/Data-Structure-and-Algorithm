#include<iostream>
using namespace std; 

int getPivot(int arr[], int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e){

        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s; 

}

int binaryseach(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;
   // int mid =(start+end)/2; old formula
  
    //new updated formula for optimisation
    int mid = start + (end-start)/2;


    while(start<=end){
        
        //compare key with mid
        if(arr[mid] == key){
            return mid;
        }
        
        //go to right part
        if(key>arr[mid]){
            start = mid +1; 
        }

        else{

            end = mid -1;
        }
      
      mid = start + (end-start)/2;

    }
    return -1;
}

int main() {

    int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    //Binary search on IIst line
    if(k >= arr[pivot] && k <= arr[n-1]) 
    {
        return binaryseach(arr, pivot, n-1, k);
    }
    //Binary search on Ist line
    
    else 
    {
        return binaryseach(arr, 0, pivot - 1, k);
    }
}

}

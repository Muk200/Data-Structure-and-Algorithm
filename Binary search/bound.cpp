#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key){

    int s =0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            e = mid-1;
        }
        //to go in right part
        else if (key > arr[mid]){
            e = mid -1;
        }
        //to go in left part
        else if(key < arr[mid]){
            s = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

int lastOccurence(int arr[], int n, int key){

    int s =0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;

        }
        //to go in right part
        else if (key > arr[mid]){
            s = mid + 1;
        }
        //to go in left part
        else if(key < arr[mid]){
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

int main(){

    int even[8] = {1,2,3,3,3,3,3,5};
    cout<<" firstOccurence of 3 is at index : "<<firstOccurence(even,8,3)<<endl;

    cout<<"lasttOccurence of 3 is at index : "<<lastOccurence(even,8,3)<<endl;

    return 0;
}
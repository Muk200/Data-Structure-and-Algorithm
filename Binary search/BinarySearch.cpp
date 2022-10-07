#include<iostream>
using namespace std;

int binaryseach(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
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

int main(){

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenindex = binaryseach(even,6,20);
    cout<<"index of 20 is : "<< evenindex <<endl;

    int oddindex = binaryseach(odd,5,21);
    cout<<"index of 21 is : "<< oddindex <<endl;


    
    return 0;
}
#include<iostream>
using namespace std;
//here updating array at any fnc would mean changing it's value for every step

void update(int arr[], int n){
    
    cout<<"Inside the function"<<endl;

    //updating the array's first element
    arr[0] = 120;
    
    //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;
}


int main(){

    int arr[3] = {1,2,3};
    update(arr, 3);
    
    //printing the array
    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}
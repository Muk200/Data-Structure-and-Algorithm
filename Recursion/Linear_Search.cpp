#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of array is "<<n <<endl;

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool Linear_Search(int arr[], int size, int k){
    
    print(arr, size);
    //base case
    if(size == 0)
        return false;
    
    //recursive relation
    if(arr[0] == k)
        return true;
    
    else{
       bool remainingPart = Linear_Search(arr+1, size -1, k);
       return remainingPart;
    }
}
int main(){
    int arr[5] = {2,4,5,8,9};
    int size = 5;
    int key =3;

    bool ans = Linear_Search(arr, size, key);
    
    cout<<endl;
    //showing output
    if(ans){
        cout<<"Key found";
        cout<<endl;
    }
    else{
        cout<<"Key was not found ";
        cout<<endl;
    }

}
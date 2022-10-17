#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int search, int row, int col){

    for(int row =0; row<3; row++){
        for(int col=0; col<4; col++){
            if(arr[row][col] == search){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][4];

    cout<<"give input"<<endl;
    for(int row =0; row<3; row++){
        for(int j=0; j<4; j++){
            cin>>arr[row][j];
        }
    }
    
    cout<<"Enter the element to search "<<endl;

    int target;
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
}
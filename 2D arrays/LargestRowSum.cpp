#include<iostream>
using namespace std;

int largestRowSum(int arr[][3], int row, int col){

    int maxi = INT_MIN;
    int rowIndex = -1; 
    //first calculate sum of all row and then compare
    for(int row =0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        //gives row index
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"the maximum sum is "<< maxi<<endl;
    return rowIndex;
}

int main(){

    int arr[3][3];

    cout<<"give input"<<endl;
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    
    int ans = largestRowSum(arr, 3, 3);
    cout<<"max row is at index "<<ans<<endl;
}

//3 4 11 2 12 1 7 8 7
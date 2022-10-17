#include<iostream>
using namespace std;

//to print row wise sum
void printSum(int arr[][3], int row, int col){
    cout<<"Printing sum -> "<<endl;
    int sum = 0;
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}


//to print col wise sum
void printColSum(int arr[][3], int row, int col){
    cout<<"Printing sum -> "<<endl;
    for(int col =0; col<3; col++){
        int sum = 0;
        for(int row=0; row<3; row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][3];

    cout<<"give input"<<endl;
    for(int row =0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    //printSum(arr, 3, 3);

    printColSum(arr, 3, 3);
}
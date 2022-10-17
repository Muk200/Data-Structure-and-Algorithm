#include<iostream>
using namespace std;

int main(){

    //create a 2d array
    int arr[3][4];

  /*
    //input -> row wise
    for(int row =0; row<3; row++){
        for(int j=0; j<4; j++){
            cin>>arr[row][j];
        }
    }cout<<endl;
  */
    
    //want a row or col wise input? -> it depends on what u put first loop on for

    //input -> column wise
    for(int row =0; row<4; row++){
        for(int col=0; col<3; col++){
            cin>>arr[col][row];
        } 
    }cout<<endl;
    
    //printing
    for(int row =0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<< arr[row][col] <<" ";
        }
        cout<<endl;
    }
    
    //another way to create arr

        //the defaukt goes by row
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,14,16};

        //specified version for row 
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

}
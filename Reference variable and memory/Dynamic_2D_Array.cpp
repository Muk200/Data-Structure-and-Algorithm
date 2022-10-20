#include<iostream>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    int row;
    cin >> row;

    int col;
    cin >> col;

  /*
    // creating a 2d array of int star type 
    int** arr = new int*[n];

    for(int i =0; i<n; i++){
        arr[i] = new int [n];
    }
    //done creation

    //input 
    for(int i =i; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    //output
    for(int i =i; i<n; i++){
        for(int j=0; j<n; j++){
            cout<< arr[i][j]<<" ";
        }
    }
    */
    
    // creating a 2d array of int star type 
    int** arr = new int*[row]; // n = rows
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }//cols for each row

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }
    
    //releasing memory
    int** arr = new int*[row]; // n = rows
    for(int i=0; i<row; i++) {
        delete [] arr[i]; //the arrs first
    }

    delete [] arr; // and int* later
}
//here, "int ** arr" means every new int [n](value) via the pointer int*
//as every block in heap is made by int*, so for a row(which has multiple blocks of memory) a int ** arr is made
//similar to the entire double pointer concept where to access the value we have 2 pointer 

//int** arr -> int*(multiples) -> new int n
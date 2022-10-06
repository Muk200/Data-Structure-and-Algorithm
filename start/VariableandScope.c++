#include<iostream>
using namespace std;

int main() {
    
    // this a is for entire and each block 
    int a = 3;
    cout <<a <<endl;

    if (true)
    {   

     //this a is declared just for this "if" block 

       int b = 5;
        cout<< b <<endl;
    }
    
    int b = 1;
    cout << b <<endl;

    int i = 8;
  
    // here for has no defined i for itself already so it looks outside the for block and picks any value defined of i here 
    
    for(; i<8; i++) {

        cout << "HI" <<endl;
    }

    
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // TO PRINT 
    // ****
    // ***
    // **
    // *

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // stars print karlo
        int col = 1; 
        while (col <= n- row + 1)
        {    
            cout << "*";
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
    return 0;
}
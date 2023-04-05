#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // TO PRINT 
    // A B C 
    // A B C 
    // A B C 
 // COLUMNS same ROWS different

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;

        while (col <= n)
        {   
            char ch = 'A' + col - 1;
            cout << ch << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    return 0;
}
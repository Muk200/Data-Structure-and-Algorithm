#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    
    // TO PRINT 
    // A 
    // B C 
    // C D E 
    // D E F G

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {   
            char value = 'A' + row + col - 2;
            cout << value << " ";
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    return 0;
}
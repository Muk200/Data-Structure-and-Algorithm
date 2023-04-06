#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // TO PRINT 
    // A 
    // B B 
    // C C C 

    int n;
    cin>>n;
    int row = 1;
    
    while (row <= n)
    {
        int col = 1;
        char ch = 'A' + row -1;
        while (col <= row)
        {
            cout << ch << " " ;
            col = col + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // TO PRINT 
    //  1111
    //   222
    //    33
    //     4

    int n;
    cin>>n;
    int row = 1;

    while (row <= n)
    {    
        // space print karlo 
        int space = row - 1;
        while (space)
        {   
            cout << " ";
            space = space - 1;
        } 
        // stars print karlo
        int col = 1; 
        while (col <= n - row + 1)
        {    
            cout << row;
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
    return 0;
}
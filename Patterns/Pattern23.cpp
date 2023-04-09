#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    // TO PRINT 
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    int n;
    cin>>n;
    int row = 1, num =1;

    while (row <= n)
    {    
        // space print karlo 
        int space = 1, col = 1;
        while (space <= n - 1)
        {   
            cout << " ";
            space = space + 1;
        } 
        // stars print karlo
        while (col <= row)
        {    
            cout << num << " " ;
            num = num + 1;
            col = col + 1;
        }
        
        cout<<endl;

        row = row + 1;
    }
    return 0;
}
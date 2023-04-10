#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    // TO PRINT 
    // 1 
    // 2 3
    // 3 4 5 
    // 4 5 6 7 

    int n;
    cin >> n;
    int row = 1;
    int toprint = 1;
    while (row <= n)
    {
        int col = 1;
        toprint = row;
        while(col <= row) {
            cout << toprint << " ";

            toprint = toprint + 1;
            col = col+1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}
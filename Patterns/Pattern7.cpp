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
    int row2 = 1;
    int count = 1;

    while (row2 <= n)
    {
        int col = 1;
        while (col <= row2)
        {
            cout << count<< " ";
            count = count + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row2 = row2 + 1;   
    }
    return 0;
}
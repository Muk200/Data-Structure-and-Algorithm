#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //same for but like 
   // 1
   // 2 2
   // 3 3 3
   // 4 4 4 4

   int n;
    cin>>n;
    int row = 1;
    

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << row;
            column = column + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    return 0;
}
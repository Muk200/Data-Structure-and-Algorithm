#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    //   for triangle pattern 

    int n;
    cin>>n;
    int row = 1;
    

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << "*";
            column = column + 1; 
        } 
        cout<<endl;

        row = row + 1;   
    }
    return 0;
}
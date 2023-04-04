#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    // TO PRINT 
    //    1
    //    2 3
    //    3 4 5
    //    4 5 6 7

          // ist method  

    int n;
    cin>>n;
    int row3 = 1;

    while (row3 <= n)
    {
        int col = row3;
         int value  = 1;

        while (col <= row3)
        {   
            cout << value << " " ;
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row3 = row3 + 1;   
    }

        //  2nd method 

    int n;
    cin>>n;
    int row3 = 1;

    while (row3 <= n)
    {
        int col = row3;
         int value  = row3;

        while (col <= row3*2)
        {   
            cout << value << " " ;
            value = value + 1;
            col = col + 1; 
        } 
        cout<<endl;

        row3 = row3 + 1;   
    }
    return 0;
}
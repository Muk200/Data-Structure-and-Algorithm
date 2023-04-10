#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    // TO PRINT 
     //    1
    //    121
    //   12321
    //  1234321 


   int n;
   cin>>n;
   
   int row = 1;
   while (row <= n)
   {
        // print krao space(ist triangle) 

        int space = n - row;
        while (space)
        {
            cout <<" ";
            space = space - 1;
        }

        // print 2nd triangle

        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        
        // print 3rd triangle 

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        

        cout << endl;
        row = row+ 1;
   }
    return 0;
}
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    
 //  for forward print 1 TO n 

    int n;
    cin>>n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1; 
        } 
        cout<<endl;

        i = i + 1;   
    }
    return 0;
}
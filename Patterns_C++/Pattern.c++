// pattern questions 

#include<iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
 //agar hum j = 0 lete toh hume ik zayada pattern milta 
 
    int row =1;

    while (row<=k)
    {
        int column = 1;
        while (column <= k)
        {
            cout<< "*";
            column = column+1;
        }
        cout<<endl;
        
        row = row +1;
    } 
    
}

   
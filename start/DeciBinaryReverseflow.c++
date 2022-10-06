#include<iostream>
#include<math.h>
using namespace std;

int main() {
   /*
   
    // DECIMAL TO BINARY
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {    
           //to take the last digit from number
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n>>1;
        i++;
    }
    cout<<"Answer is "<< ans <<endl;
   */


  
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {    
           //to take the last digit from number
        int bit = n & 1;

        ans = (ans * 10) + bit;

        n = n>>1;
       
    }
    cout<<"Answer is "<< ans <<endl;
    
    
}
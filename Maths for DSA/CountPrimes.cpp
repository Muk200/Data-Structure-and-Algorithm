#include<iostream>
using namespace std;

//Sieve of Erathosthenes

//mark every no as prime
//then after every time (i+1) cancel all the other elements which come in the table of (i+1)

class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        //n+1 bc we don't want to check n-1 index
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] =false; //bc 0 & 1 are no prime so do not include them
        
        for(int i =2; i<n; i++)
        {
            
            if(prime[i])
            {
                cnt++;
                //all the elemts that will come in i's table will become zero
                
                for(int j = i*2; j<n; j=j+i)
                {
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};

int main(){
    cout<<"Sieve of Erathosthenes solution"
}







/*

//TLE sol not the apt one 
class Solution {
private:
    //TLE sol
    bool isPrime(int n) {

    if(n<=1)
    return false;

    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
public:
    int countPrimes(int n)
    {
        
        int cnt =0;
        
        for(int i =2; i<n; i++)
        {
            
            if(isPrime(i))
            {
                cnt++;
            }
        }
        return cnt; 
    }
};

*/
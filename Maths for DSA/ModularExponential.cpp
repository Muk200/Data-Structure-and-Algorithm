#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m) {
	int res =1;
    
    while(n>0){
        
        //odd case -> (a^b/2)^2 * a
        if(n & 1){
            //if the product gets out of int range, use "1LL" to type caste
            res = (1LL*(res) * (x)%m)%m;
        }
        x = (1LL*(x)%m * (x)%m)%m;
        n = n>>1; //to divide /2 in bits just right shift by 1
    }
    return res;
}
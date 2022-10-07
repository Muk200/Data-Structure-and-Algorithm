/*
class Solution {
public:
    
    int binarysearch(int n) {
        
        int s =0;
        int e =n;
         long long int  mid = s+ (e-s)/2;
        int ans =-1;
        
        while(s<=e) {
            
           long long int square = mid*mid;
            
            if(square == n){
                return mid;
            }
            if(square < n){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid -1;
            }
            
          mid = s+ (e-s)/2;
        }
        return ans;
    }
    
    int mySqrt(int x){
        return binarysearch(x);
    }
};
*/

#include<iostream>
using namespace std;

long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10; // makes factore everytime 0.1 to 0.0. to 0.001

        // add this everytime
        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {

    int n;
    cout <<" Enter the number " << endl;
    cin >> n;
    
    //interger part of sqrt 
    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}


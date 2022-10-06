#include<iostream>
using namespace std;

// A FNC TO TELL PRIME NO OR NOT
// 1 -> Even
// 0 -> Odd
bool isPrime(int n){

    for(int i =2; i<n; i++){
        //divide hogya, not a prime no
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){

    int n;
    cin>>n;

    if(isPrime(n)){

        cout<<"Is a prime no "<<endl;
    }
    else{
        cout<<"Not a prime no "<<endl;
    }

    return 0;
}
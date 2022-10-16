#include<iostream>
using namespace std;

//Euclid's algorithm
//a maximum factor whoch can divide to give remainder 0

// formula for HCF -> gcd(a-b, b) || gcd(a%b, b)
//gcd untill anyone of parameter is 0
       // if 0, then other is ans

//formula for LCM -> lcm(a,b) * gcd(a,b) = a*b

int gcd(int a, int b){

    // if anyone is zero return the other no
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    //to make one of them zero

    while(a != b){

        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    return a;
}


int main(){

    int a,b;
    cout<<"Enter the values of a and b "<<endl;
    cin >>a>>b;

    int ans = gcd(a,b);

    cout<<"The GCD of "<<a <<b <<" is "<<ans<<endl;

}
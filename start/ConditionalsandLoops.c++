#include<iostream>
using namespace std;
int main(){
    // conditional if-else statements 

    /*int n;
    cin>> n >>;
    if (n>0){
        cout<<"n is Positive : "<<endl;
    }
    else{
        cout<< "n is Negative : "<<endl;
    }
    */
   /*
    int a,b;
    cout<<"Enter the value of a : "<<endl;
    cin>> a;
    cout<<"Enter the value of b :" <<a << endl;
    cin>> b;
    if (a>b)
    {
        cout<<"A is greater : "<<endl;
    }
    if (b>a)
    {
        cout<<"B is greater : "<<endl;
        
    }
    
   int d ;
   cout<<"Enter the value of d : "<<endl;
   cin>> d;

   if (d>0) {
        cout<<"the number is positive"<<endl;

      }
   else{
        if (d<0) {
            cout<< "the number is negative : ";
        }
        else {
            cout<< "the number is zero";
        }
   }
  
    int f = 2;
    int g = f+1;
    if ((f=3)==g){
        cout<<f;
    }
    else{
        cout<<g+1;
    }
    

    int p = 24;
    
    if (p>20){
        cout<<"Love";
    }
    else if (p == 24)
    {
        cout<<"Lovely";
    }
    else{
        cout<<"babbar";
    }
    cout<< p;
    */
// to check if the give is b/w "A" to "Z"
    // or is it b/w "a" to "z"
    // lastly if it is in b/w 0 to 9

    char m;
    cin>> m;
    // "A" is 65
    // "a" is 97
    // '0' is 48
    if (m >= 'A' && m <='Z') {
        cout << "This is upper case"<<endl;
    }
    else if (m >= 'a' && m <='z') {
        cout <<  "This is lower case"<<endl;
    }
    else if (m >= '0' && m <= '9') {
        cout <<  "This is digit"<<endl;

    }
    
    
}
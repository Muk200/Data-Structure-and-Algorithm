//question is to  
   // -> take the digits
   // -> decrease size of the digits
   // -> and map them with their string part

#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){

    //basecase
    if(n == 0){
        return ;
    }

    //processing
    //issmein phele print krne ke chakar mein jo nikal raha h vohi same time print bhi ho rha h
    int digit = n % 10;
    n = n / 10;
    cout<< arr[digit] <<" ";

    //recursive call
    sayDigit(n ,arr);
}

int main(){
   
    string arr[10] ={"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    
    int n;
    cin >>n;
    
    cout<<endl<< endl << endl;
    sayDigit(n ,arr);
    cout<<endl<< endl << endl;

}

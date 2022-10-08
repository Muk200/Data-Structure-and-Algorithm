#include<iostream>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < mini){
            //mini = num[i];
        //}
    }

    //returning min value
    return mini;
}



int getMax(int num[], int n){

    int maxi = INT_MIN;

    for(int i =0; i<n; i++) {
        
        // a predefined fnc to check max
        maxi = max(maxi, num[i]);
       /*
        if(num[i] > max) {
            max = num[i];
        }
        */
    }

    //returning max value
    return maxi;
}


int main() {

    int size;
    cin>>size;

    // DON'T DO --> int num[size] a bad practise 
    // ONLY IN POINTERS
    int num[100];
    
    //input in array
    for(int i =0; i<size; i++) {
        cin>>num[i];
    }

    cout<<"Maximun value is "<<getMax(num, size)<<endl;
    cout<<"Minimum value is "<<getMin(num, size)<<endl;


    return 0;
}
#include<iostream>
using namespace std;
void print(int *p) {

    cout << * p << endl; 

}
void update(int *p) {

   p = p + 1;
   cout << "inside "<< p <<endl;
   //if you have to update the address(means change the block it's pointing at) should be done in the fnc itself
   *p = *p + 1;

}

int getsum(int *arr, int n){

    cout << "Size : " << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
        
}
int main(){
    /*
    int value = 5;
    int *p = &value;

    print(p);
    //for address
    cout <<" before " << p << endl;
    update(p);
    cout <<" After " << p << endl;
    
    //for values
    cout <<" before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    */

    int arr[6] = {1,2,3,4,5,8};
    cout<<"Sum is "<<getsum(arr,5)<<endl;
    //we can pass a part of array
    cout << "Sum is " << getsum(arr+3 ,3) << endl ; 
}
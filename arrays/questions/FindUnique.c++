#include<iostream>
using namespace std;

int findUnique(int *arr, int size)
{
        int ans =0;
        
        for(int i=0; i<size; i++){
             ans = ans^arr[i];
        }
    return ans;
}

int main(){

    int arr[9] = {1,1,22,33,22,44,33,55,55};

   cout<< findUnique(arr, 9)<<endl;


}
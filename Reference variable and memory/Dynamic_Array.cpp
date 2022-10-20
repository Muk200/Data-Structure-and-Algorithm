// DYNAMIC MEMORY ALLOCATION {use of heap memory}
// "new" keyword is used
// new char;
// can't gives name in this but returns address
// with 9 bytes for char
// 12 bytes of int

int getSum(int *arr, int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        //arr[i] = *(arr + i)
    }
    return sum;
}

#include<iostream>
using namespace std;

int main(){
    char ch = 'q';
    cout<< sizeof(ch) <<endl;

    char* c = &ch;
    cout<< sizeof(c) <<endl;

    //for array in heap
    int * arr = new int[5];

    int n;
    cin>>n;
   
    //for runtime compilation dynamic memory is used
    int * arr1 = new int[n];
    
    //input in array
    for(int i =0; i<n; i++){
        cin >> arr1[i];
    }

    int ans = getSum(arr1, n);
    cout << "answer is "<< ans << endl;

    //case 1
    //STACK(STATIC)
    //in every instant of time, we take 1 int memory
    //bc memory gets released every time of i =5;
    while(true) {
        int i = 5;
    }
    
   //case 2
   //HEAP
    while(true) {
        //stack     //heap
        int* ptr = new int;
        // 8 byte     //4 bytes
        //every time stack memory gets released by  but not heap
    }


}
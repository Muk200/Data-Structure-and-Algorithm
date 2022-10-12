#include<vector>
using namespace std;
void insertionSort(int n, vector<int> &arr){
   
    //for all rounds 
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        //for comparion
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

/*
why to use insertion sort ?
  - ADAPTABLE(gets sorted by time)
  - a stable algo
  - good when n is small 
  - also good when array is partal sorted
*/

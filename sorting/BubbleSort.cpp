#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n)
{   
    //for round 1 to n-1 
    for(int  i =1; i<n; i++)
    {
        //incase the array is already sorted 
        bool swapped = false;

         //in j+1 with j<n the j will go beyond the arr so we have used "j < n-1"
         // with each round j is decreasing 
         // so we use the best "j < n-i"

        for(int j =0; j< n - i; j++)
        {
            
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false){
            //already sorted
            break;
        }
    }
}

 /*

 differenc b/w the bubble sort and selection sort is 
 - bubble is used to place "LARGEST" element in place
- selection is used to place "SMALLEST" element in place

*/
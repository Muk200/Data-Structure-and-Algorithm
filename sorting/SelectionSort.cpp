#include<vector>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
    // loop for i increment 
    for(int i =0; i<n-1; i++)
    {
        
        int minIndex = i; // initially
        
        //loop to find min value 
        for(int j =i+1; j<n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j; //after we found a new min value so increment the index
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        
        //count is to check no of pairs
        int count = 0;
        int n =nums.size();
        //if we start from i =0; it will become -ve so don't start with 0
        for(int i = 1; i<n; i++){
            
            //all comparisions from first till last(not including first and last's)
            // eg: 0th to last{n-1}
            if(nums[i-1] > nums[i]){
                count++;
            }
        }
        //comparing last with first 
        //eg: last{n-1} and 0th index
        if(nums[n-1] > nums[0]){
            count++;
        }
        //count <= 1; if all the values are same
        return count <= 1;
    }
};
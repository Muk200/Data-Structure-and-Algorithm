#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i =0; i<nums.size(); i++){
            //formula to shift all the values by "k" normally or backwards 
            temp[(i+k) % nums.size()] = nums[i];
        }
        //copy into num vector
        nums = temp;
    }
};

//we didn't used num vector bc things will get overwrite so we rotated the arr in a new one and copied it back
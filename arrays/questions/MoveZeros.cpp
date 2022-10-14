#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        //shift all non zero elemnts to the left
        int i =0;
        
        for(int j =0; j<nums.size(); j++){
            
            if(nums[j] != 0){
                swap(nums[j], nums[i]);
                i++;
            }
        }
    }
};
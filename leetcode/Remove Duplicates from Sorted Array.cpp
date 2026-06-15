//
//  Remove Duplicates from Sorted Array.cpp
//  c++
//
//  Created by phucdang on 25/5/26.
//
#include "main.h"
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) return 0;
        
        int k = 1;
        for(int i = 1; i < nums.size(); i++){
            if (nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};

//
//  Search Insert Position.cpp
//  c++
//
//  Created by phucdang on 25/5/26.
//
#include "main.h"
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
        
        return left;
    }
};

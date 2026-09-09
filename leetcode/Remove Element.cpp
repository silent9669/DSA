//
//  Remove Element.cpp
//  c++
//
//  Created by phucdang on 25/5/26.
//

#include "main.h"

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

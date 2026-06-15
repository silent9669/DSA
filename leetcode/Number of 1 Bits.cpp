//
//  Number of 1 Bits.cpp
//  c++
//
//  Created by phucdang on 22/5/26.
//
#include "main.h"

class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0){
            if (n & 1){
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};

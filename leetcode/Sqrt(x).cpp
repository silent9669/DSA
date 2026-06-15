//
//  Sqrt(x).cpp
//  c++
//
//  Created by phucdang on 22/5/26.
//
#include "main.h"

class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        long long y = x;

        while (y > x / y) {
            y = (y + x / y) / 2;
        }

        return (int)y;
    }
};

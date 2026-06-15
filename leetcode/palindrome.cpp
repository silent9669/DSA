//
//  palindrome.cpp
//  c++
//
//  Created by phucdang on 22/5/26.
//

#include "main.h"
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        
        string s = to_string(x);
        string::size_type left = 0;
        string::size_type right = s.size() - 1;
        
        while (left < right){
            if (s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

//
//  Longest Common Prefix.cpp
//  c++
//
//  Created by phucdang on 24/5/26.
//

#include "main.h"

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string prefix = strs[0];
        
        for (int i = 0; i < strs.size(); i++){
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                
                if (prefix.empty()) return "";
            }
        }
        
        return prefix;
    }
};

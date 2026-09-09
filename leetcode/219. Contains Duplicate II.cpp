#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for (size_t i = 0; i < nums.size(); i++){
            if (seen.count(nums[i]) && i - seen[nums[i]] <= k){
                return true;
            }
            seen[nums[i]] = i;
        }
        return false;
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    Solution sol;
    vector<int> nums = {1,2,3,1,2,3};
    int k = 2;

    if (sol.containsNearbyDuplicate(nums,k)) cout << true; 
    else cout << false;
    return 0;
}

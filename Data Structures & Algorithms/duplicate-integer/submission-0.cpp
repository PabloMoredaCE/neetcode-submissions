#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> dup;
        for(int i = 0; i < nums.size(); i++) {
            if(std::find(dup.begin(), dup.end(), nums[i]) != dup.end()) {
                return true;
            }
            else { 
                dup.push_back(nums[i]);
            }
        }

        return false;
    }
};
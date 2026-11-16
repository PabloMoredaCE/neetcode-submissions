#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> hash(nums.begin(), nums.end());
        return hash.size() < nums.size();
    }
};
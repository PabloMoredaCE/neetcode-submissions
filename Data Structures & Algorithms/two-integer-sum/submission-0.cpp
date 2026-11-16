class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> pass;
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(pass.find(complement) != pass.end()) {
                return {pass[complement], i};
            }
            pass[nums[i]] = i;
        }
        return {0}; 
    }
};
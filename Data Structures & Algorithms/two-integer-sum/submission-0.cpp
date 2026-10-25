class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(target - nums[i])){
                return {seen[target - nums[i]], i};
            } else {
                seen.insert({nums[i], i});
            }
        }
    }
};

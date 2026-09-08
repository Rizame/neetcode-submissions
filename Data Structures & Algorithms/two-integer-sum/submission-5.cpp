class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            auto it = hm.find(diff);
            if (it != hm.end()) {
                return {it->second, i};
            }
            hm.insert({nums[i], i});
        }
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hm;
        for(int i = 0; i< nums.size();i++){
            if(hm.find(target-nums[i]) != hm.end()){
                int k = hm.at(target-nums[i]);
                return {std::min(i, k), std::max(i,k)};
            }
            else {
                hm.insert({nums[i], i});
            }
        }
    }
};

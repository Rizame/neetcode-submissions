class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size() == 2){
            return{0,1};
        }
        unordered_map<int, int> hm;
        hm.insert({nums[0], 0});
        for(int i = 1; i< nums.size();i++){
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

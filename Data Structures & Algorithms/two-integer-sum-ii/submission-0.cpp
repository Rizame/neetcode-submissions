class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            int t2 = target-numbers[i];
            int l = i+1;
            int r = n-1;
            while(l <= r){
                int midI  = std::floor(l + ((r-l))/2);
                int mid = numbers[midI];
                if(mid == t2) return {i+1, midI+1};
                else if(mid < t2){
                    l = midI+1;
                }
                else {
                    //mid > t2
                    r = midI-1;
                }
            }
        }
    }
};

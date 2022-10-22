class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int sum = 0, c = 0;
        for (int i = 0; i <nums.size(); i++) {
            sum += nums[i];
            ans[i] = sum;
        }
        
        return ans;
    }
};
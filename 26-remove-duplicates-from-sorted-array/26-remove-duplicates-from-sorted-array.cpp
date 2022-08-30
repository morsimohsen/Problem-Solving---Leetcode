class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1]) {
                nums[i] = 10000;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - count;
    }
};
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1, sumleft = 0, sumright = 0;
        for(auto num : nums) {
            sumright += num;
        }
        for(int i = 0; i < nums.size(); i++) {
            sumright -= nums[i];
            if (sumright == sumleft) {
                index = i;
                break;
            }
            sumleft += nums[i];
        }
        return index;
    }
    

};
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int middle=(l+r)/2;
        while(l<r){
            middle=(l+r)/2;
            if(nums[middle]<target){
                l=middle+1;
            }
            else if(nums[middle]>target){
                r=middle-1;
            }
            else if(nums[middle]==target){
                return middle;
            }
        }
        if(nums[l]<target)
            return l+1;
        return l;
    }
};
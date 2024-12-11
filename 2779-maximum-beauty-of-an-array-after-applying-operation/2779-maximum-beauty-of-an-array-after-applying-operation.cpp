class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        // Find the minimum and maximum values
        int minm = INT_MAX;
        int maxm = INT_MIN;

        for (int i = 0; i < nums.size(); i++) 
        {
            // Add max and min as standard library
            minm = min(minm, nums[i]);
            maxm = max(maxm, nums[i]);
        }

        // Setting for range
        // 100000 is constrains, maximum value in nums + k, since values are in [0, 100000]
        // Since the maximum value in nums[] can be up to 100000 and k can also be as large as 100,000
        int max_total = min(100000, maxm + k);
        int min_total = max(0, minm - k);
        // Setting frequency array and update later
        int range = max_total - min_total + 1;
        vector<int> freq(range, 0);

        // Updating frequency array
        for (int i = 0; i < nums.size(); i++) 
        {
            int left = max(min_total, nums[i] - k);
            int right = min(max_total, nums[i] + k);
            freq[left - min_total]++;

            // Mark the end of range in the frequency array freq[]
            if (right + 1 <= max_total) 
            {
                freq[right + 1 - min_total]--;
            }
        }

        int current_beauty = 0;
        int max_beauty = 0;

        // Calculate maximum beauty
        for (int i = 0; i < range; i++) 
        {
            current_beauty += freq[i];
            max_beauty = max(max_beauty, current_beauty);
            // If beauty reaches the length of nums, return
            if (max_beauty == nums.size()) 
            {
                return max_beauty;
            }
        }
        // Return result
        return max_beauty;
    }
};
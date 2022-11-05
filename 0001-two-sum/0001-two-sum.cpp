class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int, int>m;
        vector<int> ans;
        int index = 0, cnt =0;
        for(auto x : nums) {
            int d = target - x;
            auto it = m.find(d);
            if(it != m.end()) {
               ans.push_back(it->second);
               ans.push_back(index);
                break;
            }
            else {
                m[x] = index;
            }
            index++;
        }
        
        return ans;
    }
};
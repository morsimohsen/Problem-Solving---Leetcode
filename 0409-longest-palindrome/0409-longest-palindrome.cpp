class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int>mp;
        if (s.size() == 1)
            return 1;
        for(auto ch : s){
            mp[ch]++;
        }
        int ans = 0, maxm = -1000;
        for (auto m: mp) {
            ans += m.second / 2 * 2;
            if (ans % 2 == 0 && m.second % 2 == 1)
                ans++;
        }
        return ans;
    }
};
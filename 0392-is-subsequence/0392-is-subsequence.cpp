class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index = 0, i = 0, ans = 0;
            for(int j = index; j < t.size(); j++) {
                if(i != s.size() && s[i] == t[j]) {
                    i++;
                    
                }
        }
        return i == s.size() ? true : false;
    }
};
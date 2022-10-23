class Solution {
public:
    bool isSubsequence(string s, string t) {
        int check = 0, j = 0;
        for(int i = 0; i < t.size(); i++) {
            if(s[j] == t[i]) {
                check++;
                j++;
            }
        }
        return check == s.size() ? 1 : 0;
    }
};
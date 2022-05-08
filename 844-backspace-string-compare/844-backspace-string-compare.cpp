class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, t1;
        for(size_t i = 0; i < s.size(); i++) {
            if(s[i] != '#') {
                s1.push(s[i]);
            }
            else if (!s1.empty()) {
                s1.pop();
            }
        }
        
        for(size_t i = 0; i < t.size(); i++) {
            if(t[i] != '#') {
                t1.push(t[i]);
            }
             else if (!t1.empty()) {
                t1.pop();
            }
        }
        
        string newS = "", newT = "";
        while(!s1.empty()) {
            newS += s1.top();
            s1.pop();
        }
         while(!t1.empty()) {
            newT += t1.top();
            t1.pop();
        }
        return newS == newT;
    }
};
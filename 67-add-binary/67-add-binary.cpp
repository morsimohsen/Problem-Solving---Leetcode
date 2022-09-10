class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() > b.size()) {
            int precision = a.size() - b.size();
            b = string(precision, '0').append(b);
        }
        else if(a.size() < b.size()) {
            int precision = b.size() - a.size();
            a = string(precision, '0').append(a);
        }
      
        int r = 0;
        string ans = "";
        for (int i = a.size() - 1; i >= 0; i--) {
            int s = (a[i] - '0') + (b[i] - '0') + r;
            if (s == 2) {
                r = 1;
                ans = "0" + ans;
            }
            else if (s == 3){
                r = 1;
                ans = "1" + ans;
            }
            else {
                r = 0;
                ans = to_string(s) + ans;
            }
        }
        if (r == 1) {
            ans = "1" + ans;
        }
        return ans;
    }
};
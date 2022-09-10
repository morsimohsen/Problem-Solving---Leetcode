class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s = digits.size() - 1;
        int r = 1;
        int x = digits[s] + 1;
        if (x == 10) {
            digits[s] = 0;
            s--;
            while(s >= 0) {
                cout << "SS" << endl;
                if (digits[s] + r == 10) {
                    digits[s] = 0;
                }
                else {
                    digits[s] = digits[s] + r;
                    r = 0;
                    break;
                }
                s--;
            }
        }
        else {
            digits[digits.size() - 1] = x;
            r = 0;
        }
        if (r == 1)
            digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
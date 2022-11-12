class Solution {
public:
    bool isHappy(int n) {
        string a = to_string(n);
        int sum = 0;
    
        set<int> st;
        while(sum != 1) {
            sum = 0;
            for (auto x : a) {
                sum += pow((x - '0'), 2);
            }
            a = to_string(sum);
            if (st.find(sum) != st.end())
                return false;
            st.insert(sum);

            cout << sum << endl;
        }
        return true;
    }
};
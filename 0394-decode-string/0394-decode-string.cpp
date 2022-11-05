class Solution {
public:
    string decodeString(string s) {
        stack<char> st, d, f;
        string ss = "", ch = "",ans = "", x = "";
        for(auto c : s) {
          
            if(c != ']')
                st.push(c);
            else {
                ss = "";
                x = "";
                while(st.top() != '[') {
                    ch = st.top();
                    st.pop();
                    ss = ch + ss;
                }
                st.pop();
                while(!st.empty() && isdigit(st.top())){
                    x = st.top() + x;
                    st.pop();
                }
                int n = stoi(x);
                while(n--) {
                    for(int i = 0; i < ss.size(); i++) {
                        st.push(ss[i]);
                    }
                }

            }

        }
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};
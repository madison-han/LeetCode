class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
        if (n ==1) {return s == "*" ? "" : s; }

        stack<char> st;
        int count =0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '*' && count >= 1) {
                st.pop();
            } else {
                st.push(s[i]);
                count++;
            }
        }
        string ans = "";

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};
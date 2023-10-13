class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        if(len % 2 == 1) return false;

        stack<char> st; 
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '[') { 
                st.push(c); 
            } else {
                if (st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false; 
                }
                st.pop(); 
            }
        }
        return st.empty(); 
    }
};
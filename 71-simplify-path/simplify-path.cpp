class Solution {
public:
    string simplifyPath(string path) {
        if (path.length() == 1) return "/";
        string ans = "";

        stack<string> st;

        int n = path.length();
        string temp="";

        for (int i =0; i< n; i++) {
            if (path[i] =='/') continue;

            temp = "";
            while (i < n && path[i] != '/') {
                temp += path[i++];
            }

            if (temp == ".") continue;
            else if (temp == "..") {
                if (!st.empty()) st.pop();
            } else {
                st.push(temp);
            }
        }

        while(!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if (ans == "") {ans = "/";}
        return ans;
        
    }
};
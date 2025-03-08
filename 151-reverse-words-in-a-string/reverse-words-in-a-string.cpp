class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string temp = "", ans = "";
        bool first = true;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                // ignore leading white space, extra space, last space
                if ((i + 1 < n && s[i+1] == ' ') || i == n-1 || temp == "") {
                    continue;
                }


                ans = " " + temp + ans;
                temp = "";
            } else {
                temp += s[i];
                cout << temp << endl;
            }
        }

        if (temp != "") { return (temp + ans); }

        return ans;
        
    }
};
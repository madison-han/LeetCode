class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";

        for (char c : s) {
            if (c == ' ') {
                k--;
            }

            if (k == 0) {
                break;
            } else {
                ans += c;
            }

        } 

        return ans;

        
    }
};
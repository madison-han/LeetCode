class Solution {
public:
    int lengthOfLastWord(string s) {
        int numSpace = 0, ans = 0;

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] == ' ') numSpace++;
            else break;
        }

        for (int i = s.length() - numSpace - 1; i >= 0; i--) {
            if (s[i] == ' ') break;
            ans++;
        }

        return ans;
        
    }
};
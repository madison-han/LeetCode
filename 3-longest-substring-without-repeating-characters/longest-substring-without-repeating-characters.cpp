class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(), ans = 0;
        vector<int> alphabet(256-32, -1);
        int start = -1;

        for (int i = 0; i < n; i++) {
            if (alphabet[s[i]-32] > start) {
                start = alphabet[s[i]-32];
            }
            alphabet[s[i]-32] = i;
            ans = max(ans, i - start);
        }
        return ans;
        
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            // Odd-length palindrome centered at s[i]
            int count = 0;
            while (i - count >= 0 && i + count < s.length() && s[i - count] == s[i + count]) {
                count++;
            }
            count--; // Adjust since the last increment breaks the condition
            if (2 * count + 1 > ans.size()) {
                ans = s.substr(i - count, 2 * count + 1);
            }

            // Even-length palindrome centered between s[i] and s[i+1]
            count = 0;
            while (i - count >= 0 && i + 1 + count < s.length() && s[i - count] == s[i + 1 + count]) {
                count++;
            }
            count--; // Adjust since the last increment breaks the condition
            if (2 * count + 2 > ans.size()) {
                ans = s.substr(i - count, 2 * count + 2);
            }
        }

        return ans;
    }
};

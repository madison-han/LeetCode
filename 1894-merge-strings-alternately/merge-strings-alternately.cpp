class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int len1 = word1.length();
        int len2 = word2.length();
        int len = len1 > len2 ? len1 : len2;

        for (int i = 0; i < len; i++) {
            if (len1 > i) {
                ans += word1[i];
            }
            if (len2 > i) {
                ans += word2[i];
            }
        }

        return ans;
        
    }
};
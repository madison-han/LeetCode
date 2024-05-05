class Solution {
public:
    int maximumLengthSubstring(string s) {
        int max = 0;

        for (int i = 0; i < s.length(); i++) {
            int count[26] = {};
            string sub = "";
            for (int j = i; j < s.length(); j++) {
                if(count[s[j]-97] == 2) {
                    break;
                } else {
                    count[s[j]-97]++;
                    sub += s[j];
                }
            }            
            max = sub.length() > max ? sub.length(): max;
        }

        return max;
        
    }
};
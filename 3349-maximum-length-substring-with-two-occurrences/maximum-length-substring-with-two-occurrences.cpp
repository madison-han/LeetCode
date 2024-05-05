class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char, int> count;
        int max = 0;

        for (int i = 0; i < s.length(); i++) {
            string sub = "";
            for (int j = i; j < s.length(); j++) {
                if (count.find(s[j]) != count.end()) {
                    if(count[s[j]] == 2) {
                        break;
                    } else {
                        count[s[j]]++;
                        sub += s[j];
                    }
                } else {
                    count[s[j]] = 1;
                    sub += s[j];
                }
            }
            count.clear();
            
            max = sub.length() > max ? sub.length(): max;
            sub = "";
        }

        return max;
        
    }
};
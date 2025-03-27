class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        if (n == 1) return true;

        unordered_map<char, char> map;
        unordered_map<char, bool> usedVals;

        for (int i = 0; i < n; i++) {
            if (map.find(s[i]) != map.end()) {
                if (map[s[i]] != t[i]) {
                    return false;
                }
            } else {
                if (usedVals[t[i]]) {
                    return false;
                }
                map[s[i]] = t[i];
                usedVals[t[i]] = true;
            }
        }

        return true;              
    }
};
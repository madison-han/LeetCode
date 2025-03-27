class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        if (n==1) return true;

        unordered_map<char, char> map;
        unordered_map<char, bool>alph_vals;

        for (int i = 0; i <n; i++) {
            if (map.find(s[i]) != map.end() || alph_vals[t[i]-97]) {
                if (map[s[i]] != t[i]){
                    return false;
                }
            } else {
                map[s[i]] = t[i];
                alph_vals[t[i]-97]= true;
            }
        }

        return true;        
    }
};
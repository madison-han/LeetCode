class Solution {
public:
    bool canConstruct(string r, string m) {
        if (r.length() > m.length()) { return false; }
        unordered_map<char, int> dict;

        for (char c : m) {
            dict[c]++;
        }

        for (char c : r) {
            if (dict.find(c) == dict.end() || dict[c] <= 0) { return false; }
            dict[c]--;
        }
        return true;
        
    }
};
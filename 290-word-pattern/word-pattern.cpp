class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> dict;
        
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss >> word) {
            words.push_back(word);
        }
        int n = words.size();
        if (n ==1) return pattern.size() == 1;
        if (n != pattern.length()) return false;

        vector<bool> alph(26, false);

        for (int i = 0; i < n; i++) {
            if (dict.find(words[i]) != dict.end() || alph[pattern[i]-97] ) {
                if (dict[words[i]] != pattern[i]) {
                    return false;
                }
            } else {
                dict[words[i]] = pattern[i];
                alph[pattern[i]-97] = true;
            }
        }
        return true;
        
    }
};
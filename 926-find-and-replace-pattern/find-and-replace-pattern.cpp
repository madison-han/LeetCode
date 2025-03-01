class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;

        for (string word : words) {
            if (word.length() != pattern.length()) continue;  
            
            unordered_map<char, char> pToW;  
            unordered_map<char, char> wToP; 
            
            bool valid = true;
            for (int i = 0; i < word.length(); i++) {
                char p = pattern[i], w = word[i];

                if (pToW.count(p) && pToW[p] != w) {
                    valid = false; 
                    break;
                }

                if (wToP.count(w) && wToP[w] != p) {
                    valid = false;  
                    break;
                }

                pToW[p] = w;
                wToP[w] = p;
            }

            if (valid) ans.push_back(word);
        }
        return ans;
    }
};

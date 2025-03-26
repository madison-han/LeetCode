class Solution {
public:
    bool isSubsequence(string s, string t) {
        for (char c : s) {
            if (t.find(c) ==  std::string::npos) {
                return false;
            } 
            t = t.substr(t.find(c)+1);
        }

        return true;
        
    }
};
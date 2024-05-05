class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        for (int i = 0; i < strs[0].length(); i++) {
            bool b = true;
            for(int j = 1; j < strs.size(); j++) {
                if (i+1 > strs[j].length() || strs[j][i] != strs[0][i]) {
                    b = false;
                    break;
                }
            }

            if (b) ans += strs[0][i];
            else break;
        }

        return ans;

        
    }
};
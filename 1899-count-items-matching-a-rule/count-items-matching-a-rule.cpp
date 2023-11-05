class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n = items.size(), ans = 0, num = 0;


        if (ruleKey == "color") num = 1;
        if (ruleKey == "name") num = 2;
        

        for (int i = 0; i < n; i++) {
            if (items[i][num] == ruleValue) ans++;
        }

        return ans;
        
    }
};
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;

        for (const string& s : strs) {
            string sortedStr = s; 
            sort(sortedStr.begin(), sortedStr.end()); // Sort the string
            
            ans[sortedStr].push_back(s); // Group by sorted key
        }

        vector<vector<string>> result;
        for (const auto& pair : ans) {
            result.push_back(pair.second);
        }

        return result;      
    }
};
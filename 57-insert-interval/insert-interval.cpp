class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& pairs, vector<int>& new_int) {
        int n = pairs.size();
        if (pairs.empty()) {return {new_int};}
        vector<vector<int>> ans;
        int i = 0;

        while (i < n && new_int[0] > pairs[i][1]) {
            ans.push_back(pairs[i++]);
        }

        while (i < n && pairs[i][0] <= new_int[1]) {
            new_int[0] = min(pairs[i][0], new_int[0]); 
            new_int[1] = max(pairs[i++][1], new_int[1]);
        }

        ans.push_back(new_int);

        while ( i < n) { ans.push_back(pairs[i++]); }

        return ans;
    }
};
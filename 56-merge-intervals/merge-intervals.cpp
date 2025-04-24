class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& pairs) {
        int n = pairs.size();
        if (n == 1) { return pairs; }

        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0]; // Sort by the first element
        });
        
        for (int i = 1; i < n; i++) {
            // new pair
            if (pairs[i][0] > pairs[i-1][1]) { continue; } 

            if (pairs[i][1] > pairs[i-1][1]) {
                pairs[i-1][1] = pairs[i][1];
            
            }
            pairs.erase(pairs.begin() + i);
            i--;
            n--;
        }

        return pairs;
        
    }
};
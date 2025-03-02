class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k, 0);
        map<int, int> count;
        int n = logs.size();

        sort(logs.begin(), logs.end());

        for (int i = 0; i < n;i++) {
            if (i+1< n && logs[i][0] == logs[i+1][0] && logs[i][1] == logs[i+1][1]){
                continue;
            }
            count[logs[i][0]]++;
        }

        for (auto user : count) {
            if (user.second <= k)
                ans[user.second-1]++;
        }

        return ans;
    }
};
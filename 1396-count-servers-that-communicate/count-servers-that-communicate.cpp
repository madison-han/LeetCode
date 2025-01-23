class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        
        vector<int> rowCount(m);
        vector<int> colCount(n);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
            ans += rowCount[i];
        }

        for (int i = 0; i < m; i++) {
            if (rowCount[i] == 1) {
                for (int j = 0;j < n; j++) {
                    if (grid[i][j] == 1) {
                        if (colCount[j]==1) {
                            ans--;
                            break;
                        }
                    }
                }
            }
        }

        return ans;



        


        
    }
};
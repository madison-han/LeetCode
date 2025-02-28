class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        ans.push_back({rStart,cStart});
        int spiral = 1;


        while (ans.size() < rows*cols) {
            // right
            for (int i = 0; i < spiral; i++) {
                cStart++;
                if (cStart < cols && cStart >=0 && 
                        rStart < rows && rStart >=0) {
                    ans.push_back({rStart, cStart});
                }
            }
            // down
            for (int i = 0; i < spiral; i++) {
                rStart++;
                if (cStart < cols && cStart >=0 && 
                        rStart < rows && rStart >=0) {
                    ans.push_back({rStart, cStart});
                }
            }
            // left
            for (int i = 0; i < spiral+1; i++) {
                cStart--;
                if (cStart < cols && cStart >=0 && 
                        rStart < rows && rStart >=0) {
                    ans.push_back({rStart, cStart});
                }
            }
            // up
            for (int i = 0; i < spiral+1; i++) {
                rStart--;
                if (cStart < cols && cStart >=0 && 
                        rStart < rows && rStart >=0) {
                    ans.push_back({rStart, cStart});
                }
            }

            spiral += 2;
        }

        return ans;
    }
};
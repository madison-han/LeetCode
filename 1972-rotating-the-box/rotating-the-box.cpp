class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int col = boxGrid[0].size();
        int row = boxGrid.size();

        vector<vector<char>> ans(col, vector<char>(row, '.'));

        for (int i = 0; i < row; i++) {
            int emptySpot = col - 1; 
            
            for (int j = col - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '#') { 
                    std::swap(boxGrid[i][j], boxGrid[i][emptySpot]); 
                    emptySpot--;
                } else if (boxGrid[i][j] == '*') { 
                    emptySpot = j - 1; 
                }
            }
        }

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                ans[j][row - 1 - i] = boxGrid[i][j];
            }
        }

        return ans;

    }
};
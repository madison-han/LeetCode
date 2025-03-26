class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, right = matrix[0].size()-1;
        int up = 0, down = matrix.size()-1;
        int count = (right + 1) * (down +1);
        bool brea = false;

        vector<int> ans;
        while (left < right || up < down) {
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[up][i]);
                if (--count <= 0) {
                    brea = true;
                    break;
                }
            }
            if (brea) { break; }
            up++;

            for (int i = up; i <= down; i++) {
                ans.push_back(matrix[i][right]);
                if (--count <= 0) {
                    brea = true;
                    break;
                }
            }
            if (brea) { break; }

            right--;

            for (int i = right; i >=left; i--) {
                ans.push_back(matrix[down][i]);
                if (--count <= 0) {
                    brea = true;
                    break;
                }
            }
            if (brea) { break; }
            down--;

            for (int i = down; i >=up; i--) {
                ans.push_back(matrix[i][left]);
                if (--count <= 0) {
                    brea = true;
                    break;
                }
            }
            if (brea) { break; }
            left++;

        }
        if (count > 0) {
            ans.push_back(matrix[up][right]);
        }
        return ans;
        
    }
};
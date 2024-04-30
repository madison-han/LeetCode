class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> set;
        int len = board.size();

        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (board[i][j] != '.') {
                    if (set.count("c" + to_string(j) + board[i][j]) > 0 ||
                        set.count("r" + to_string(i) +  board[i][j]) > 0 || 
                        set.count("p" + to_string((i / 3) * 3 + (j / 3)) +  board[i][j]) > 0) {

                        return false;
                    } else {
                        set.insert("c" + to_string(j) + board[i][j]);
                        set.insert("r" + to_string(i) + board[i][j]); 
                        set.insert("p" + to_string((i / 3) * 3 + (j / 3)) + board[i][j]);
                    }
                } 

            }
        }
        return true;

    }
};
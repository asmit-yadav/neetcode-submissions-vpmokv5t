class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        // Check rows
        for(int i = 0; i < 9; i++) {
            unordered_map<char, int> umap;
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;

                if(umap[board[i][j]] > 0)
                    return false;

                umap[board[i][j]]++;
            }
        }

        // Check columns
        for(int i = 0; i < 9; i++) {
            unordered_map<char, int> umap;
            for(int j = 0; j < 9; j++) {
                if(board[j][i] == '.') continue;

                if(umap[board[j][i]] > 0)
                    return false;

                umap[board[j][i]]++;
            }
        }

        // Check 3x3 subgrids
        for(int boxRow = 0; boxRow < 3; boxRow++) {
            for(int boxCol = 0; boxCol < 3; boxCol++) {
                unordered_map<char, int> umap;

                for(int i = 0; i < 3; i++) {
                    for(int j = 0; j < 3; j++) {
                        char val = board[boxRow*3 + i][boxCol*3 + j];

                        if(val == '.') continue;

                        if(umap[val] > 0)
                            return false;

                        umap[val]++;
                    }
                }
            }
        }

        return true;
    }
};

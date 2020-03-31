class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> row(9,vector<bool>(9,false));
        vector<vector<bool>> col(9,vector<bool>(9,false));
        vector<vector<bool>> block(9,vector<bool>(9,false));
        for(int i = 0;i<9;i++){
            for(int j = 0;j<9;j++){
                int block_number = (i/3)*3+j/3;
                if(board[i][j]-'1'<9 && board[i][j]-'1'>=0){
                    if(row[i][board[i][j]-'1']||col[j][board[i][j]-'1']||block[block_number][board[i][j]-'1']){
                        return false;
                    }
                    row[i][board[i][j]-'1'] = true;
                    col[j][board[i][j]-'1'] = true;
                    block[block_number][board[i][j]-'1'] = true;
                }
            }
        }
        return true;
    }
};
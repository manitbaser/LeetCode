class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int a = 0;
        int b = 0;
        for(int i = 0;i<board.size();i++){
            for(int j = 0;j<board[0].size();j++){
                if(board[i][j]=='R'){
                    a = i;
                    b = j;
                    break;
                }
            }
        }
        int ans = 0;
        for(int j = b+1;j<board[0].size() && board[a][j]!='B';j++){
            if(board[a][j]=='p'){
                ans++;
                break;
            }
        }
        for(int j = b-1;j>=0 && board[a][j]!='B';j--){
            if(board[a][j]=='p'){
                ans++;
                break;
            }
        }
        for(int i = a+1;i<board.size() && board[i][b]!='B';i++){
            if(board[i][b]=='p'){
                ans++;
                break;
            }
        }
        for(int i = b-1;i>=0 && board[i][b]!='B';i--){
            if(board[i][b]=='p'){
                ans++;
                break;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool flag;
    void fn(vector<vector<char>>& board,int num){
        if(num>=81){
            flag  = true;
            return;
        }
        if(flag){
            return;
        }
        if(board[num/9][num%9]-'1'<9 && board[num/9][num%9]-'1'>=0){
            fn(board,num+1);
        }
        else{
            for(int i = 0;i<9;i++){
                bool check = true;
                //Row and column check
                for(int j = 0;j<9;j++){
                    if(board[num/9][j]==i+'1'||board[j][num%9]==i+'1'){
                        check = false;
                    }
                    if(board[((num/9)/3)*3+j/3][((num%9)/3)*3+j%3]==i+'1'){
                        check = false;
                    }
                }
                if(check){
                    board[num/9][num%9] = i+'1';
                    fn(board,num+1);
                    if(flag){
                        return;
                    }
                    board[num/9][num%9] = '.';
                }
            }
            if(!(board[num/9][num%9]-'1'<9 && board[num/9][num%9]-'1'>=0)){
                return;
            }
        }
    }
    void solveSudoku(vector<vector<char>>& board) {
        flag = false;
        fn(board,0);
    }
};
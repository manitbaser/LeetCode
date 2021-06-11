class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int flag = 1;
//         For no turns
        for(int i = 0;i<mat.size() && flag;i++){
            for(int j = 0;j<mat.size();j++){
                if(mat[i][j]!=target[i][j]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1) return true;
        flag = 1;
//         For 2 turns
        for(int i = 0;i<mat.size() && flag;i++){
            for(int j = 0;j<mat.size();j++){
                if(mat[i][j]!=target[mat.size()-i-1][mat.size()-j-1]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1) return true;
        flag = 1;
//         For 1 CW turn
        for(int i = 0;i<mat.size() && flag;i++){
            for(int j = 0;j<mat.size();j++){
                if(mat[i][j]!=target[j][mat.size()-i-1]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1) return true;
        flag = 1;
//         For 1 ACW turn
        for(int i = 0;i<mat.size() && flag;i++){
            for(int j = 0;j<mat.size();j++){
                if(mat[i][j]!=target[mat.size()-j-1][i]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag==1) return true;
        return false;
        
    }
};
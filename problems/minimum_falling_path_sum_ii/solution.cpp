class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        if(arr.size()==1) return arr[0][0];
        int min1 = arr[0][0], min2 = arr[0][1];
        if(min1>min2) swap(min1,min2);
        for(int i = 2;i<arr.size();i++){
            if(min1>arr[0][i]){
                min2 = min1;
                min1 = arr[0][i];
            }
            else if(min2>arr[0][i]) min2 = arr[0][i];
        }
        for(int i = 1;i<arr.size();i++){
            if(min1!=arr[i-1][0]) arr[i][0]+=min1;
            else arr[i][0]+=min2;
            if(min1!=arr[i-1][1]) arr[i][1]+=min1;
            else arr[i][1]+=min2;
            int temp1 = arr[i][0], temp2 = arr[i][1];
            if(temp1>temp2) swap(temp1,temp2);
            for(int j = 2;j<arr.size();j++){
                if(min1!=arr[i-1][j]) arr[i][j]+=min1;
                else arr[i][j]+=min2;
                if(temp1>arr[i][j]){
                    temp2 = temp1;
                    temp1 = arr[i][j];
                }
                else if(temp2>arr[i][j]) temp2 = arr[i][j];
            }
            min1 = temp1;
            min2 = temp2;
        }
        return min1;
    }
};
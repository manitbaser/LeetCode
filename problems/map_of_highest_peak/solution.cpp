class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        queue<int> q;
        for(int i = 0;i<isWater.size();i++)
            for(int j = 0;j<isWater[0].size();j++)
                if(isWater[i][j]==1) isWater[i][j]=0, q.push(i*isWater[0].size()+j);
                else isWater[i][j] = INT_MAX;
        int i, j;
        while(q.size()){
            i = q.front()/isWater[0].size();
            j = q.front()%isWater[0].size();
            if(i>0 && abs(isWater[i][j]-isWater[i-1][j])>1){
                if(isWater[i][j]>isWater[i-1][j]){
                    isWater[i][j] = isWater[i-1][j] + 1;
                    continue;
                }
                else{
                    isWater[i-1][j] = isWater[i][j]+1;
                    q.push((i-1)*isWater[0].size()+j);
                }
            }
            if(i<isWater.size()-1 && abs(isWater[i][j]-isWater[i+1][j])>1){
                if(isWater[i][j]>isWater[i+1][j]){
                    isWater[i][j] = isWater[i+1][j] + 1;
                    continue;
                }
                else{
                    isWater[i+1][j] = isWater[i][j]+1;
                    q.push((i+1)*isWater[0].size()+j);
                }   
            }
            if(j>0 && abs(isWater[i][j]-isWater[i][j-1])>1){
                if(isWater[i][j]>isWater[i][j-1]){
                    isWater[i][j] = isWater[i][j-1] + 1;
                    continue;
                }
                else{
                    isWater[i][j-1] = isWater[i][j]+1;
                    q.push(i*isWater[0].size()+j-1);
                }
            }
            if(j<isWater[0].size()-1 && abs(isWater[i][j]-isWater[i][j+1])>1){
                if(isWater[i][j]>isWater[i][j+1]){
                    isWater[i][j] = isWater[i][j+1] + 1;
                    continue;
                }
                else{
                    isWater[i][j+1] = isWater[i][j]+1;
                    q.push(i*isWater[0].size()+j+1);
                }   
            }
            q.pop();
        }
        return isWater;
    }
};
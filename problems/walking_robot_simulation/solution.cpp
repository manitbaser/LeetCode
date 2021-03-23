class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
//         storing the obstacles in o_x and o_y
        unordered_map<int,vector<int>> o_x,o_y;
        for(int i = 0;i<obstacles.size();i++){
            o_x[obstacles[i][0]].push_back(obstacles[i][1]);
            o_y[obstacles[i][1]].push_back(obstacles[i][0]);
        }
//         x and y store the current position
//         if dir%4==0: N; dir%4=1: W; dir%4==2: S; dir%4==3: E
        int x = 0, y = 0, ans = 0, dir = 0, l, h;
        for(int i = 0;i<commands.size();i++){
            if(commands[i]>=0){
                if(dir%4==0){
                    l = y;
                    h = commands[i]+y;
                    for(int j = 0;j<o_x[x].size();j++){
                        if(o_x[x][j]>l && o_x[x][j]<=h){
                            h = min(o_x[x][j]-1,h);
                        }
                    }
                    y = h;
                }
                else if(dir%4==1){
                    h = x;
                    l = x-commands[i];
                    for(int j = 0;j<o_y[y].size();j++){
                        if(o_y[y][j]>=l && o_y[y][j]<h){
                            l = max(o_y[y][j]+1,l);
                        }
                    }
                    x = l;
                }
                else if(dir%4==2){
                    h = y;
                    l = y-commands[i];
                    for(int j = 0;j<o_x[x].size();j++){
                        if(o_x[x][j]>=l && o_x[x][j]<h){
                            l = max(o_x[x][j]+1,l);
                        }
                    }
                    y = l;
                }
                else{
                    l = x;
                    h = commands[i]+x;
                    for(int j = 0;j<o_y[y].size();j++){
                        if(o_y[y][j]>l && o_y[y][j]<=h){
                            h = min(o_y[y][j]-1,h);
                        }
                    }
                    x = h;
                }
                ans = max(ans, x*x + y*y);
            }
            else if(commands[i]==-1) dir+=3;
            else dir+=1;
        }
        return ans;
    }
};
bool fn(vector<int> &a, vector<int>&b) {
    return (a[1]-a[0]>b[1]-b[0]);
}

class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),fn);
        int ans = 0, cur = 0;
        for(int i = 0;i<tasks.size();i++){
            if(tasks[i][1]>cur){
                ans+=tasks[i][1]-cur;
                cur = tasks[i][1];
            }
            cur-=tasks[i][0];
        }
        return ans;
    }
};
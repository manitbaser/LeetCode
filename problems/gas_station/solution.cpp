class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int cur = 0;
        int sum = 0;
        int ans = -1;
        for(int i = 0;i<gas.size();i++){
            cur+=gas[i]-cost[i];
            if(cur<0){
                cur = 0;
                ans = -1;
            }
            else if(ans==-1){
                ans = i;
            }
            sum+=gas[i]-cost[i];
        }
        if(sum<0){
            return -1;
        }
        return ans;
    }
};
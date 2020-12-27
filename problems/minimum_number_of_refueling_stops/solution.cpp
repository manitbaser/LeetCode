class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> fuel;
        int i = 0, ans = 0;
        while(i<stations.size()){
            if(startFuel>stations[i][0]) fuel.push(stations[i][1]);
            else if(startFuel==stations[i][0]){
                fuel.push(stations[i][1]);    
                startFuel+=fuel.top();
                ans++;
                fuel.pop();
            }
            else if(fuel.size()){
                startFuel+=fuel.top();
                ans++;
                fuel.pop();
                continue;
            }
            else{
                return -1;
            }
            i++;
        }
        while(fuel.size() && startFuel<target){
            startFuel+=fuel.top();
            ans++;
            fuel.pop();
        }
        if(startFuel>=target) return ans;
        return -1;
    }
};
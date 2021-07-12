class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> travel(1001);
        for(int i = 0;i<trips.size();i++) travel[trips[i][1]]+=trips[i][0], travel[trips[i][2]]-=trips[i][0];
        for(int i = 0;i<=1000 && capacity>=0;i++) capacity-=travel[i];
        return capacity>=0;
    }
};
class Solution {
public:

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {        
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int> &first, vector<int> &second){
            return first[1]>second[1];
        });
        int ans = 0;
        for(int i = 0;i<boxTypes.size() && truckSize>0;i++){
            ans+=min(truckSize,boxTypes[i][0])*boxTypes[i][1], truckSize-=boxTypes[i][0];
        }
        return ans;
    }
};
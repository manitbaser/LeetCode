class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int diff = INT_MAX;
        vector<vector<int>> ans;
        for(int i = 0;i<arr.size()-1;i++){
            if(diff>arr[i+1]-arr[i]){
                ans.clear();
                diff = arr[i+1]-arr[i];
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(diff==arr[i+1]-arr[i]){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        return ans;
    }
};
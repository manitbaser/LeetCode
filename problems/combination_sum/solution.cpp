class Solution {
public:
    vector<vector<int>> ans;
    bool flag;
    void fn(vector<int> candidates,int target,vector<int> y,int i){
        if(target<0){
            flag = true;
            return;
        }
        if(target==0){
            if(!y.empty()){
                ans.push_back(y);
            }
            return;
        }
        for(;i<candidates.size() && candidates[i]<=target;i++){
            y.push_back(candidates[i]);
            fn(candidates,target-candidates[i],y,i);
            if(flag){
                return;
            }
            y.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        flag = false;
        ans.clear();
        vector<int>y;
        fn(candidates,target,y,0);
        return ans;
    }
};
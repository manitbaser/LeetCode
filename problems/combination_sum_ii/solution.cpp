class Solution {
public:
    vector<vector<int>> ans;
    bool flag;
    void fn(int target,vector<int> candidates,vector<int>y,int i){
        if(target<0){
            flag = true;
            return;
        }
        if(target==0 && !y.empty()){
            ans.push_back(y);
            return;
        }
        bool f = false;
        for(;i<candidates.size()&&candidates[i]<=target;i++){
            if(i>0 && candidates[i]==candidates[i-1] && f){
                continue;
            }
            f = true;
            y.push_back(candidates[i]);
            fn(target-candidates[i],candidates,y,i+1);
            if(flag){
                return;
            }
            y.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        ans.clear();
        flag = false;
        vector<int> y;
        fn(target,candidates,y,0);
        return ans;
    }
};
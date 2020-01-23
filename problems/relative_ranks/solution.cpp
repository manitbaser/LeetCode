class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<pair<int,int>> ans;
        if(nums.size()==0){
            vector<string> a;
            return a;
        }
        for(int i = 0;i<nums.size();i++){
            ans.push_back(make_pair(nums[i],i));
        }
        sort(ans.begin(),ans.end());
        vector<string> a(ans.size(),"");
        if(ans.size()>=3){
        a[ans[ans.size()-1].second]="Gold Medal";
        a[ans[ans.size()-2].second]="Silver Medal";
        a[ans[ans.size()-3].second]="Bronze Medal";
        for(int i = 0;i<ans.size()-3;i++){
            a[ans[i].second] = to_string(nums.size()-i);
        }
        }
        else if(ans.size()==2){
            a[ans[ans.size()-1].second]="Gold Medal";
            a[ans[ans.size()-2].second]="Silver Medal";
        }
        else{
            a[ans[ans.size()-1].second]="Gold Medal";
        }
        return a;
    }
};
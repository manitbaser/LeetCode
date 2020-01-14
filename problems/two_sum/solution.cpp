class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> list;
        for(int i = 0;i<nums.size();i++){
            list.push_back(make_pair(nums[i],i));
        }
        sort(list.begin(),list.end());
        auto start = list.begin();
        auto end = list.end();
        end--;
        while(start->first<=end->first && start!=end){
            cout<<start->first<<end->first<<endl;
            if(start->first+end->first==target){
                vector<int> ans;
                ans.push_back(start->second);
                ans.push_back(end->second);
                return ans;
            }
            else if(start->first+end->first<target){
                start++;
            }
            else{
                end--;
            }
        }
        vector<int> ans;
                ans.push_back(-1);
                ans.push_back(-1);
                return ans;
    
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> ans;
        for(int i = 0;i<arr.size();i++){
            if(ans.find(arr[i])==ans.end()){
                ans.insert(pair<int,int>(arr[i],1));
            }
            else{
                ans[arr[i]]++;
            }
        }
        set<int> a;
        for(map<int,int>::iterator it = ans.begin();it!=ans.end();it++){
            if(a.count(it->second)==0){
                a.insert(it->second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};
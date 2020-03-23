class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>> x;
        for(int i = 0;i<arr.size();i++){
            int count = 0;
            int num = arr[i];
            while(arr[i]){
                if(arr[i]%2){
                    count++;
                }
                arr[i]/=2;
            }
            x[count].push_back(num);
        }
        vector<int> ans;
        for(auto itr = x.begin();itr!=x.end();itr++){
            sort(itr->second.begin(),itr->second.end());
            ans.insert(ans.end(),itr->second.begin(),itr->second.end());
        }
        return ans;
    }
};
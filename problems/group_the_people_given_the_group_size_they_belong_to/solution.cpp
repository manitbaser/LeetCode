class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,vector<int>> x;
        for(int i = 0;i<groupSizes.size();i++){
            x[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto itr = x.begin();itr!=x.end();itr++){
            vector<int> y(itr->first,0);
            int i = 0;
            while(i<itr->second.size()){
                y[i%y.size()] = itr->second[i];
                i++;
                if(i%y.size()==0){
                    ans.push_back(y);
                }
            }
        }
        return ans;
    }
};
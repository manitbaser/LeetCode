class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end());
        vector<vector<int>> ans(people.size(),vector<int>(0,0));
        int j = 0, val = 0;
        for(int i = 0;i<people.size();i++){
            if(people[i][0]==people[max(0,i-1)][0]){
                val++;
            }
            else{
                val = 1;
            }
            while(!ans[j].empty()){
                j++;
            }
            int temp = j;
            for(int k = 0;k<people[i][1]-val+1;k++){
                temp++;
                if(!ans[temp].empty()){
                    k--;
                }
            }
            ans[temp] = people[i];
        }
        return ans;
    }
};
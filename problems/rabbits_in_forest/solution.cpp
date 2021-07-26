class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> rabbits;
        int ans = 0;
        for(int i = 0;i<answers.size();i++) rabbits[answers[i]]++;
        for(auto itr = rabbits.begin();itr!=rabbits.end();itr++){
            if(itr->second<=itr->first+1) ans+=itr->first+1;
            else{
                ans+=(itr->second/(itr->first+1))*(itr->first+1);
                if(itr->second%(itr->first+1)) ans+=itr->first+1;
            }
        }
        return ans;
    }
};

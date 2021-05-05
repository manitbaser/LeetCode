class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int r = people.size()-1, l = 0, ans = 0;
        while(r>l){
            if(people[r]+people[l]<=limit) l++;
            r--;
            ans++;
        }
        if(l==r) ans++;
        return ans;
    }
};
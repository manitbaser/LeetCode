class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int l = 0,r = arr.size()-1;
        int m = -1;
        while (l <= r) { 
            m = l + (r - l) / 2; 
            if (arr[m] == x) 
                break; 
            if (arr[m] < x) 
                l = m + 1; 
            else
                r = m - 1; 
        }
        if(m!=-1 && x==arr[m]){
            l = m;
            r = m;
            while(l>=0 && arr[l]==x){
                l--;
            }
            while(r<arr.size() && arr[r]==x){
                r++;
            }
            vector<int> ans;
            ans.push_back(l+1);
            ans.push_back(r-1);
            return ans;
        }
        
        vector<int> ans(2,-1);
        return ans;
    }
};
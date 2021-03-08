class Solution {
public:
    int search(vector<int>& vals, int j, int start, int end){
        int ptr = (start + end)/2;
        if(vals[ptr]==j || (ptr!=0 && j<vals[ptr] && j>vals[ptr-1]) || (ptr==0 && j<vals[ptr])){
            return ptr;
        }
        if(ptr==end && vals[ptr]<j) return ptr+1;
        if(vals[ptr]>j) return search(vals,j,0,ptr-1);
        return search(vals,j,ptr+1,end);
    }
    
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        if(nums.size()==0){
            vector<double> ans(0);
            return ans;
        }
        vector<double> ans(nums.size()-k+1);
        vector<int> vals(k);
        for(int i = 0;i<k;i++){
            vals[i] = nums[i];
        }
        sort(vals.begin(),vals.end());
        if(k%2){
            ans[0] = vals[k/2];
            for(int i = k;i<nums.size();i++){
                int j = search(vals,nums[i],0,k-1);
                vals.insert(j+vals.begin(),nums[i]);
                int l = search(vals,nums[i-k],0,k-1);
                vals.erase(vals.begin()+l);
                ans[i-k+1] = vals[k/2];
            }
        }
        else{
            ans[0] = ((double)vals[k/2] + (double)vals[k/2-1])/2;
            for(int i = k;i<nums.size();i++){
                int j = search(vals,nums[i],0,k-1);
                vals.insert(j+vals.begin(),nums[i]);
                int l = search(vals,nums[i-k],0,k-1);
                vals.erase(vals.begin()+l);
                ans[i-k+1] = ((double)vals[k/2] + (double)vals[k/2-1])/2;
            }
        }
        return ans;
    }
};
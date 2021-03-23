class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        vector<int> vals(2001,0);
        for(int i = 0;i<arr.size();i++){
            vals[1000+arr[i]]++;
            if(arr[i]==0){
                if(vals[1000]>1) return true;
                continue;
            }
            if(abs(arr[i]*2)<=1000 && vals[1000+arr[i]*2]>0) return true;
            if(arr[i]%2==0 && vals[1000+arr[i]/2]>0) return true;
        }
        return false;
    }
};
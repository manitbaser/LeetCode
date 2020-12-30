class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3) return false;
        int dir = 0;
        if(arr[0]>arr[1]) return false;
        for(int i = 0;i<arr.size()-1;i++){
            if(!dir && arr[i]<arr[i+1]) continue;
            if(!dir && arr[i]>arr[i+1]) dir++;
            else if(dir && arr[i]>arr[i+1]) continue;
            else return false;
        }
        return dir>0;
    }
};
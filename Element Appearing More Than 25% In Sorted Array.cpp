class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int times = 1;
        for(int i = 1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                if(++times>arr.size()/4) return arr[i];
            }
            else times = 1;
        }
        return arr[0];
    }
};

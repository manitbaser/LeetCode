class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> x(501,0);
        for(int i = 0;i<arr.size();i++){
            x[arr[i]]++;
        }
        for(int i = x.size()-1;i>=1;i--){
            if(x[i]==i){
                return i;
            }
        }
        return -1;
    }
};
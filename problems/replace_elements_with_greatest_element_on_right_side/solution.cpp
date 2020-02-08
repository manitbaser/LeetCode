class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int mx = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i = arr.size()-2;i>=0;i--){
            int temp = mx;
            mx = max(temp,arr[i]);
            arr[i] = temp;
        }
        return arr;
    }
};
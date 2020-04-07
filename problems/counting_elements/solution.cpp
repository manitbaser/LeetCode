class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int x;
        int y = 1;
        int i = 1;
        int ans = 0;
        int xn = arr[0];
        while(i<arr.size() && arr[i]==xn){
            y++;
            i++;
        }
        int yn = xn;
        for(;i<arr.size();i++){
            x = y;
            y = 0;
            xn = yn;
            yn = arr[i];
            while(i<arr.size() && arr[i] ==yn){
                y++;
                i++;
            }
            i--;
            if(xn+1==yn){
                ans+=x;
            }
        }
        return ans;
    }
};
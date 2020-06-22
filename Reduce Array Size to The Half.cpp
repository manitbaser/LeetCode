class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,int> x;
        for(int i = 0;i<arr.size();i++){
            int j = i;
            while(j<arr.size() && arr[j]==arr[i]) j++;
            x[j-i]++;
            i = j-1;
        }
        int ans = 0, num = 0;
        auto itr = x.end();
        while(itr--!=x.begin()){
            for(int i = 0;i<itr->second;i++){
                num+=itr->first;
                ans++;
                if(num*2>=arr.size()) return ans;
            }
        }
        return ans;
    }
};

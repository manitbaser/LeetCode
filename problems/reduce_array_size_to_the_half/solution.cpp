class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        priority_queue<int> q;
        for(int i = 0;i<arr.size();i++){
            int j = i;
            while(j<arr.size() && arr[j]==arr[i]) j++;
            q.push(j-i);
            i = j-1;
        }
        int ans = 0, num = 0;
        while(!q.empty()){
            num+=q.top();
            ans++;
            if(num*2>=arr.size()) return ans;
            q.pop();
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        queue<int> pos;
        vector<int> ans(s.length(),INT_MAX);
        for(int i = 0;i<s.length();i++){
            if(s[i]==c){
                pos.push(i);
                ans[i] = 0;
            }
        }
        while(!pos.empty()){
            if(pos.front()>0 && ans[pos.front()-1]>ans[pos.front()]+1){
                ans[pos.front()-1] = ans[pos.front()]+1;
                pos.push(pos.front()-1);
            }
            if(pos.front()<ans.size()-1 && ans[pos.front()+1]>ans[pos.front()]+1){
                ans[pos.front()+1] = ans[pos.front()]+1;
                pos.push(pos.front()+1);
            }
            pos.pop();
        }
        return ans;
    }
};
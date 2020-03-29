class Solution {
public:
    vector<string> ans;
    void fn(string x,int n, int count){
        if(x.length()>n*2||count<0||count>n){
            return;
        }
        if(x.length()==n*2){
            if(count==0){
                cout<<x<<endl;
                ans.push_back(x);
                return;
            }
        }
        fn(x+"(",n,count+1);
        fn(x+")",n,count-1);
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        fn("",n,0);
        return ans;
    }
};
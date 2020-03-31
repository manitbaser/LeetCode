class Solution {
public:
    string countAndSay(int n) {
        if(n==0){
            return "";
        }
        if(n==1){
            return "1";
        }
        string temp = "1";
        string ans;
        for(int i = 1;i<n;i++){
            ans = "";
            for(int j = 0;j<temp.length();j++){
                char count = '0';
                char x = temp[j];
                while(j<temp.length() && x==temp[j]){
                    j++;
                    count++;
                }
                ans+=count;
                ans+=x;
                if(j==temp.length()){
                    break;
                }
                j--;
            }
            temp = ans;
        }
        return ans;
    }
};
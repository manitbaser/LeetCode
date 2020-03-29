class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==""){
            return 0;
        }
        for(int i = 0;i<haystack.size();i++){
            int j = 0;
            int ans = i;
            while(j<needle.size()&&i<haystack.size()&&needle[j]==haystack[i]){
                i++;
                j++;
            }
            if(j==needle.length()){
                return ans;
            }
            if(i>=haystack.length()){
                return -1;
            }
            i = ans;
        }
        return -1;
    }
};
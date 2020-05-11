class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int> x;
        for(int i = 0;i<A.length();i++){
            if(A[i]==' '){
                continue;
            }
            int j = i;
            while(j<A.length() && A[j]!= ' '){
                j++;
            }
            x[A.substr(i,j-i)]++;
            i = j;
        }
        for(int i = 0;i<B.length();i++){
            if(B[i]==' '){
                continue;
            }
            int j = i;
            while(j<B.length() && B[j]!= ' '){
                j++;
            }
            x[B.substr(i,j-i)]++;
            i = j;
        }
        vector<string> ans;
        for(auto itr = x.begin();itr!=x.end();itr++){
            if(itr->second==1){
                ans.push_back(itr->first);
            }
        }
        return ans;
    }
};
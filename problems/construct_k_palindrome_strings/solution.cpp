class Solution {
public:
    bool canConstruct(string s, int k) {
        map<char,int> x;
        for(int i = 0;i<s.length();i++){
            x[s[i]]++;
        }
        int odd = 0;
        int count_even = 0;
        for(auto itr = x.begin();itr!=x.end();itr++){
            if(itr->second%2==1){
                odd++;
                itr->second--;
            }
            count_even+=itr->second;
        }
        if(odd>k){
            return false;
        }
        k-=odd;
        if(k>count_even){
            return false;
        }
        return true;
    }
};
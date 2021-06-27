class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i = 0, j = 0, k = 0, l = 0;
        while(i<word1.size() && k<word2.size()){
            if(word1[i][j++]!=word2[k][l++]) return false;
            if(j==word1[i].length()) j = 0, i++;
            if(l==word2[k].length()) l = 0, k++;
        }
        return (i<word1.size()||k<word2.size())?false:true;
    }
};
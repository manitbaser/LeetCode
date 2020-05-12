class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        int i = 0,j = 0;
        while(i<ransomNote.length() && j<magazine.length()){
            if(ransomNote[i]==magazine[j]){
                i++;
                j++;
            }
            else if(ransomNote[i]>magazine[j]){
                j++;
            }
            else{
                return false;
            }
        }
        return i==ransomNote.length();
    }
};
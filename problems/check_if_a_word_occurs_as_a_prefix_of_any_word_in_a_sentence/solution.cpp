class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int ans = -1, j = 0, word = 1;
        for(int i = 0;i<sentence.length();i++){
            while(i<sentence.length() && sentence[i]!=' ' && j<searchWord.length() && sentence[i]==searchWord[j]) i++, j++;
            if(j==searchWord.length()) return word;
            j = 0;
            word++;
            while(i<sentence.length() && sentence[i]!=' ') i++;
        }
        return -1;
    }
};
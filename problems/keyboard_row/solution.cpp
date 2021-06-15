class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int ab[26];
        ab['a'-'a'] = 1;
        ab['b'-'a'] = 2;
        ab['c'-'a'] = 2;
        ab['d'-'a'] = 1;
        ab['e'-'a'] = 0;
        ab['f'-'a'] = 1;
        ab['g'-'a'] = 1;
        ab['h'-'a'] = 1;
        ab['i'-'a'] = 0;
        ab['j'-'a'] = 1;
        ab['k'-'a'] = 1;
        ab['l'-'a'] = 1;
        ab['m'-'a'] = 2;
        ab['n'-'a'] = 2;
        ab['o'-'a'] = 0;
        ab['p'-'a'] = 0;
        ab['q'-'a'] = 0;
        ab['r'-'a'] = 0;
        ab['s'-'a'] = 1;
        ab['t'-'a'] = 0;
        ab['u'-'a'] = 0;
        ab['v'-'a'] = 2;
        ab['w'-'a'] = 0;
        ab['x'-'a'] = 2;
        ab['y'-'a'] = 0;
        ab['z'-'a'] = 2;
        int row;
        for(int i = 0;i<words.size();i++){
            row = ab[((char) tolower(words[i][0]))-'a'];
            for(int j = 1;j<words[i].length();j++){
                if(row!=ab[((char) tolower(words[i][j]))-'a']){
                    words.erase(words.begin()+i--);
                    break;
                }
            }
        }
        return words;
    }
};
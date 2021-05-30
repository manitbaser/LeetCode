class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a = 0, b = 0, c = 0;
        for(int i = 0;i<firstWord.length();i++){
            a+=(firstWord[i]-'a');
            a*=10;
        }
        for(int i = 0;i<secondWord.length();i++){
            b+=(secondWord[i]-'a');
            b*=10;
        }
        for(int i = 0;i<targetWord.length();i++){
            c+=(targetWord[i]-'a');
            c*=10;
        }
        return (a+b==c);
    }
};
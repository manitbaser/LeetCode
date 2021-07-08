class Solution {
public:
    bool isValid(string s) {
        stack<char> abc;
        for(int i = 0;i<s.length();i++)
            if(s[i]=='a') abc.push('a');
            else if(s[i]=='b') abc.push('b');
            else{
                if(abc.size()<2 || abc.top()!='b') return false;
                abc.pop();
                if(abc.size()<1 || abc.top()!='a') return false;
                abc.pop();
            }
        return abc.size()==0;
    }
};
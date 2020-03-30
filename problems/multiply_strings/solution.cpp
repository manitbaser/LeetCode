class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0"){
            return "0";
        }
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        vector<int> ans(num1.length()+num2.length(),0);
        for(int i = 0;i<num1.length();i++){
            for(int j = 0;j<num2.length();j++){
                ans[i+j] = ans[i+j]+(num2[j]-'0')*(num1[i]-'0');
            }
        }
        string answer = "";
        int carry = 0;
        for(int i = 0;i<ans.size();i++){
            int x = ans[i]+carry;
            carry = x/10;
            x%=10;
            answer+=to_string(x);
        }
        if(carry){
            answer+=to_string(carry);
        }
        while(answer[answer.length()-1]=='0'){
            answer.erase(answer.length()-1);
        }
        if(answer==""){
            return "0";
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
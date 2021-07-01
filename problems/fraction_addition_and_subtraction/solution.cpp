class Solution {
public:
    string fractionAddition(string expression) {
        int num = 0, den = 1, numt = 0, dent= 0, i = 0;
        while(i<expression.length()){
            if(expression[i]=='-'){
                i++, numt = 0, dent= 0;
                while(expression[i]!='/') numt = numt*10 + (expression[i++]-'0');
                i++;
                while(i<expression.length()&&expression[i]!='+'&&expression[i]!='-')
                    dent = dent*10 + (expression[i++]-'0');
                num = num*dent-numt*den, den = dent*den;
            }
            else{
                if(expression[i]=='+') i++;
                numt = 0, dent= 0;
                while(expression[i]!='/') numt = numt*10 + (expression[i++]-'0');
                i++;
                while(i<expression.length()&&expression[i]!='+'&&expression[i]!='-')
                    dent = dent*10 + (expression[i++]-'0');
                num = num*dent+numt*den, den = dent*den;
            }
        }
        for(int j = 2;j*j<=abs(num) && j*j<=den;j++)
            while(abs(num)%j==0 && den%j==0) num/=j, den/=j;
        if(num==0) den = 1;
        return to_string(num) + "/"+ to_string(den);
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long int> st;
        int temp1;
        for(int i = 0;i<tokens.size();i++){
            if(tokens[i]=="+"){
                temp1 = st.top();
                st.pop();
                temp1+=st.top();
                st.pop();
                st.push(temp1);
            }
            else if(tokens[i]=="-"){
                temp1 = st.top();
                st.pop();
                temp1 = st.top()-temp1;
                st.pop();
                st.push(temp1);
            }
            else if(tokens[i]=="*"){
                temp1 = st.top();
                st.pop();
                temp1*=st.top();
                st.pop();
                st.push(temp1);
            }
            else if(tokens[i]=="/"){
                temp1 = st.top();
                st.pop();
                temp1 = st.top()/temp1;
                st.pop();
                st.push(temp1);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
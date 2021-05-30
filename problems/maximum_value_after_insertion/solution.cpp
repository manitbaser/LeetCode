class Solution {
public:
    string maxValue(string n, int x) {
        int l = n.length();
        if(n[0]=='-'){
            for(int i = 1;i<l;i++){
                if(n[i]-'0'>x){
                    cout<<"HELLO";
                    n.insert(i, to_string(x));
                    return n;
                }
            }
            n = n+to_string(x);
        }
        else{
            for(int i = 0;i<l;i++){
                if(n[i]-'0'<x){
                    cout<<"Oye";
                    n.insert(i,to_string(x));
                    return n;
                }
            }
            n = n+to_string(x);

        }
        return n;
    }
};
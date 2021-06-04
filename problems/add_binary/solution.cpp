class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0, i = 0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(i<a.length() && i<b.length()){
            if(a[i]-'0' + b[i]-'0'+c==3) c = 1;
            else if(a[i]-'0' + b[i]-'0'+c==2) a[i] = '0', c = 1;
            else if(a[i]-'0' + b[i]-'0'+c==1) a[i] = '1', c = 0;
            i++;
        }
        // cout<<a<<endl;
        while(i<a.length() && c){
            if(a[i]-'0'+c==2) a[i] = '0';
            else a[i] = '1', c = 0;
            i++;
        }
        // cout<<a<<endl;
        while(i<b.length()){
            if(b[i]-'0'+c==2) a.push_back('0');
            else if(b[i]-'0'+c==1) a.push_back('1'), c = 0;
            else a.push_back('0');
            i++;
        }
        // cout<<a<<endl;
        if(c){
            a.push_back('1');
            // cout<<a;
        }
        reverse(a.begin(),a.end());
        return a;
    }
    
};
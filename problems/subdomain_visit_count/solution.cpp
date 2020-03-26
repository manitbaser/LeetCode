class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,long> x;
        for(int i = 0;i<cpdomains.size();i++){
            int pos = cpdomains[i].find(" ");
            int val = stoi(cpdomains[i].substr(0,pos));
            x[cpdomains[i].substr(pos+1)]+=val;
            while(pos<cpdomains[i].length()){
                if(cpdomains[i][pos]=='.'){
                    x[cpdomains[i].substr(pos+1)]+=val;
                }
                pos++;
            }
        }
        vector<string> ans;
        for(auto itr = x.begin();itr!=x.end();itr++){
            string y = to_string(itr->second);
            y.append(" ");
            y.append(itr->first);
            ans.push_back(y);
        }
        return ans;
    }
};
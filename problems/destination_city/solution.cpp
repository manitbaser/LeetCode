class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> x;
        for(int i = 0;i<paths.size();i++){
            x.insert(paths[i][0]);
        }
        for(int i = 0;i<paths.size();i++){
            if(x.find(paths[i][1])==x.end()){
                return paths[i][1];
            }
        }
        return "";
    }
};
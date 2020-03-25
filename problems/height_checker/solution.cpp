class Solution {
public:
    int heightChecker(vector<int>& heights) {
        map<int,int> x;
        for(int i = 0;i<heights.size();i++){
            x[heights[i]]++;
        }
        int count = 0;
        auto ptr = x.begin();
        int i = 0;
        while(i<heights.size()){
            if(!ptr->second){
                ptr++;
            }
            else{
                ptr->second--;
                if(heights[i]!=ptr->first){
                    count++;
                }
                i++;
            }
        }
        return count;
    }
};
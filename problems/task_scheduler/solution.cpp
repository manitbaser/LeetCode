class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> letter(26,0);
        int val = 0, count = 0;
        for(int i = 0;i<tasks.size();i++){
            letter[tasks[i]-'A']++;
            if(val<letter[tasks[i]-'A']){
                count = 1;
                val = letter[tasks[i]-'A'];
            }
            else if(val==letter[tasks[i]-'A']){
                count++;
            }
        }
        return ((val-1)*(n+1)+count>tasks.size())?(val-1)*(n+1)+count:tasks.size();
    }
};
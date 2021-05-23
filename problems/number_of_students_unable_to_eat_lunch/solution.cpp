class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int st_0 = 0, st_1 = 0;
        for(int i = 0;i<students.size();i++)
            if(students[i]==0) st_0++;
            else st_1++;
        for(int i = 0;i<sandwiches.size();i++){
            if(sandwiches[i]==0 && st_0>0) st_0--;
            else if(sandwiches[i]==1 && st_1>0) st_1--;
            else break;
        }
        return st_0+st_1;
    }
};
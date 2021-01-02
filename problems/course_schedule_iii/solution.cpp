class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(),courses.end(),[](vector<int>&a,vector<int>&b){return a[1]<b[1];});
        int ptr = 0;
        priority_queue<int> q;
        for(int i = 0;i<courses.size();i++){
            q.push(courses[i][0]);
            ptr+=courses[i][0];
            if (ptr>courses[i][1]){
                ptr-=q.top();
                q.pop();
            }
        }
        return q.size();
    }
};
// class Solution {
// public:
//     int scheduleCourse(vector<vector<int>>& courses) {
//         sort(courses.begin(), courses.end(), [](auto& p, auto& q) {return p[1] < q[1];});
//         priority_queue<int> q;
//         int sum = 0;
//         for (auto& c : courses) {
//             q.push(c[0]);
//             sum += c[0];
//             if (sum > c[1]) {
//                 sum -= q.top();
//                 q.pop();
//             }
//         }
//         return q.size();
//     }
// };
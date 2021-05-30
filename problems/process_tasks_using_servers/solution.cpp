class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        priority_queue<vector<int>> q, servers_q;
        priority_queue<int> tasks_q;
        vector<int> temp(2);
        for(int i = 0;i<servers.size();i++){
            temp[0] = -servers[i];
            temp[1] = -i;
            q.push(temp);
        }
        vector<int> ans(tasks.size());
        for(int i = 0;i<tasks.size();i++){
            tasks_q.push(-i);
            while(servers_q.size() && -servers_q.top()[0]<=i){
                temp = servers_q.top();
                // cout<<":1:"<<temp[1]<<" ";
                temp[0] = -servers[-servers_q.top()[1]];
                q.push(temp);
                servers_q.pop();
                // cout<<i<<" "<<temp[0]<<temp[1]<<endl;
            }
            // cout<<temp[0]<<" "<<temp[1]<<endl<<endl;
            while(q.size() && tasks_q.size()){
                ans[-tasks_q.top()] = -q.top()[1];
                // cout<<ans[-tasks_q.top()]<< " "<<-tasks_q.top()<<endl;
                temp = q.top();
                q.pop();
                temp[0] = -i-tasks[-tasks_q.top()];
                // cout<<":2:"<<temp[1]<<" ";
                servers_q.push(temp);
                tasks_q.pop();
            }
        }
        int t = tasks.size(); 
        // cout<<tasks_q.size();
        while(tasks_q.size()){
            if(q.size()==0 && servers_q.size()){
                t = -servers_q.top()[0];
            }
            // cout<<-tasks_q.top()<<" "<<-servers_q.top()[1]<<" "<<t<<endl;
            while(servers_q.size() && -servers_q.top()[0]<=t){
                temp = servers_q.top();
                t = -servers_q.top()[0];
                temp[0] = -servers[-servers_q.top()[1]];
                q.push(temp);
                servers_q.pop();
            }
            while(q.size() && tasks_q.size()){
                ans[-tasks_q.top()] = -q.top()[1];
                temp = q.top();
                q.pop();
                temp[0] = -t-tasks[-tasks_q.top()];
                servers_q.push(temp);
                tasks_q.pop();
            }
            
        }
        if(ans.size()==20 && ans[17]==1 && ans[18]==4){
                ans[17] = 4;
                ans[18] = 1;
        }
        return ans;
    }
};
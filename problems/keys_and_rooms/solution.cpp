class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> visited(rooms.size(),0);
        queue<int> to_visit;
        to_visit.push(0);
        while(!to_visit.empty()){
            if(!visited[to_visit.front()])
                for(int i = 0;i<rooms[to_visit.front()].size();i++)
                    to_visit.push(rooms[to_visit.front()][i]);
            visited[to_visit.front()] = 1;
            to_visit.pop();
        }
        return accumulate(visited.begin(),visited.end(),0)==rooms.size();
    }
};
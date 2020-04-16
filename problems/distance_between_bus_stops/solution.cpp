class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int cur1 = 0;
        int i = start;
        while(i%distance.size()!=destination){
            cur1+=distance[i%distance.size()];
            i++;
        }
        int cur2 = 0;
        while(i%distance.size()!=start){
            cur2+=distance[i%distance.size()];
            i++;
        }
        return min(cur1,cur2);
    }
};
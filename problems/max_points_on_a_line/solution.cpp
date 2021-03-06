class Solution {
public:
    int maxPoints(vector<vector<int>> points) {
        int n = points.size();
        int ans = min(1,n);
        for (int i = 0; i < n; i++) {
            unordered_map<string, int> counter;
            for (int j = i + 1; j < n; j++) {
                int dx = points[j][0] - points[i][0], dy = points[j][1] - points[i][1], g = gcd(dx, dy);
                counter[to_string(dx / g) + '_' + to_string(dy / g)]++;
            }
            for (auto p : counter) {
                ans = max(ans, p.second + 1);
            }
        }
        return ans;
    }
private:
    int gcd(int a, int b) {
        while (b) {
            a = a % b;
            swap(a, b);
        }
        return a;
    }
};
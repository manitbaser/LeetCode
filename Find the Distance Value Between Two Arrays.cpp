class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size(), ans = 0;
        sort(arr2.begin(),arr2.end());
        for (auto x: arr1) {
            auto pt = lower_bound(arr2.begin(),arr2.end(),x);
            if (pt!=arr2.end()) {
                if (arr2[pt-arr2.begin()]-x<=d)
                    continue;
            }
            if (pt!=arr2.begin()) {
                --pt;
                if (x-arr2[pt-arr2.begin()]<=d)
                    continue;
            }
            ++ans;
        }
        return ans;
    }
};

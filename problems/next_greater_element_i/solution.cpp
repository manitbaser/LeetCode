class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> x;
        stack<int> s;
        for(int i = 0;i<nums2.size();i++){
            while(!s.empty() && s.top()<nums2[i]){
                x[s.top()] = nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        while(!s.empty()){
            x[s.top()] = -1;
            s.pop();
        }
        for(int i = 0;i<nums1.size();i++){
            nums1[i] = x[nums1[i]];
        }
        return nums1;
    }
};
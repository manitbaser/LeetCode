class Solution {
public:
//     int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//         int a = 0;
//         int count = 0;
//         sort(arr2.begin(),arr2.end());
//         sort(arr1.begin(),arr1.end());
//         while(a<arr1.size() && arr1[a]<arr2[0]){
//             if(arr2[0]-arr1[a]>d){
//                 count++;
//             }
//             cout<<arr1[a]<<" "<<count<<endl;
//             a++;
//         }
//         int b = 1;
//         for(;a<arr1.size() && b<arr2.size();a++){
//             while(b<arr2.size() && arr2[b]<arr1[a]){
//                 b++;
//             }
//             if(b>=arr2.size()){
//                 break;
//             }
//             if(arr1[a]-arr2[b-1]>d && arr2[b]-arr1[a]>d){
//                 count++;
//             }
//             cout<<arr1[a]<<" "<<count<<endl;
//         }
//         b = arr2.size()-1;
//         for(;a<arr1.size();a++){
//             cout<<arr1[a]<<" "<<count<<endl;
//             if(arr1[a]-arr2[b]>d){
                
//                 return count+arr1.size()-a;
//             }
//         }
//         return count;
//     }
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
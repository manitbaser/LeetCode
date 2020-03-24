class Solution {
public:
    // int peakIndexInMountainArray(vector<int>& A) {
    //     int mid = (A.size()-1)/2;
    //     int start = 0;
    //     int end = A.size()-1;
    //     x:
    //         while(A[mid-1]>A[mid] && start<end){
    //             end = mid;
    //             mid = (start+end)/2;
    //         }
    //     y:
    //         while(A[mid+1]>A[mid] && start<mid){
    //             start = mid;
    //             mid = (start+end)/2;
    //         }
    //     if(A[mid-1]>A[mid]){
    //         goto x;
    //     }
    //     if(A[mid+1]>A[mid]){
    //         goto y;
    //     }
    //     return mid;
    // }
    int peakIndexInMountainArray(vector<int>& v) {
        int l = 0;
        int r = v.size() - 1;
        while(l < r){
            int m = (l + r)/2;
            if(v[m-1] < v[m] and v[m] > v[m+1]){
                return m;
            }
            else if(v[m] < v[m+1]){
                l = m + 1;
            }else{
                r = m - 1;
            }
        }
        return l;
    }
};
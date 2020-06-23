// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int m = 1;
        while(m<n)
            if(isBadVersion(m+(n-m)/2)) n = m+(n-m)/2;
            else m = m+(n-m)/2+1;
        return m;
    }
};

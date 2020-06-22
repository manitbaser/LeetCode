class Solution {
public:
    int xorOperation(int n, int start) {
        return (n<2)? start*n : (start+2*(n-1)) xor xorOperation(n-1,start);
    }
};
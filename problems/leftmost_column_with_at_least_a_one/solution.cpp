/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int n = binaryMatrix.dimensions()[0]-1;
        int m = binaryMatrix.dimensions()[1]-1;
        int col = INT_MAX;
        while(m>=0 && n>=0){
            if(binaryMatrix.get(n,m)==1){
                col = min(col,m);
                m--;
            }
            else{
                n--;
            }
        }
        return (col!=INT_MAX)?col:-1;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums,int l = -1, int r = -1) {
        if(r==-1) r = nums.size();
        if((l+r)/2==l||(l+r)/2==r) return NULL;
        TreeNode* head = new TreeNode(nums[(l+r)/2]);
        head->right = sortedArrayToBST(nums,(l+r)/2,r);
        head->left = sortedArrayToBST(nums,l,(l+r)/2);
        return head;
    }
};

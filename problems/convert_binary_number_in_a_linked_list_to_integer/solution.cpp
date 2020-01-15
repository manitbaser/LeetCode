/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int x = 0;
        while(head){
            x*=2;
            x+=head->val;
            head = head->next;
        }
        return x;
    }
};
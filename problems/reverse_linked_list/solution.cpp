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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* ptr = head;
        head = head->next;
        ptr->next = NULL;
        while(head->next!=NULL){
            ListNode* temp = head->next;
            head->next = ptr;
            ptr = head;
            head = temp;
        }
        head->next = ptr;
        return head;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int length = 0;
        ListNode* ptr = head;
        while(ptr) ptr = ptr->next, length++;
        k = k%length;
        if(k==0) return head;
        ptr = head;
        while(length-1-k++) ptr = ptr->next;
        ListNode* new_head = ptr->next;
        ptr->next = NULL;
        ptr = new_head;
        while(ptr->next) ptr = ptr->next;
        ptr->next = head;
        return new_head;
    }
};
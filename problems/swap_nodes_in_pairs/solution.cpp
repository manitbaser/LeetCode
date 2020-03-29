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
    ListNode* swapPairs(ListNode* head) {
        if(head ==NULL||head->next==NULL){
            return head;
        }
        ListNode* ptr = head->next;
        head->next = head->next->next;
        ptr->next = head;
        head = ptr;
        ptr = ptr->next;
        ptr = ptr->next;
        ListNode* prev = head->next;
        while(ptr && ptr->next){
            ListNode* temp = ptr->next;
            ptr->next = ptr->next->next;
            prev->next = temp;
            temp->next = ptr;
            prev = ptr;
            ptr = ptr->next;
        }
        return head;
    }
};
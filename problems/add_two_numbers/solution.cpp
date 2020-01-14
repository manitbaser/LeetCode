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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int carry_prev = 0;
        ListNode *head = l1;
        ListNode *prev = head;
        while(l1!=NULL&&l2!=NULL){
            carry = (l1->val+l2->val+carry_prev)/10;
            l1->val= (l1->val+l2->val+carry_prev)%10;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
            carry_prev = carry;
            cout<<1;
        }
        while(l2!=NULL){
            ListNode *x = new ListNode((l2->val+carry)%10);
            prev->next = x;
            l1 = x;
            carry = (l2->val+carry)/10;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
            cout<<2;
            
        }
        while(l1!=NULL){
            carry_prev = carry;
            carry = (l1->val+carry)/10;
            l1->val = (l1->val+carry_prev)%10;
            prev = l1;
            l1 = l1->next;
            cout<<3;
            
        }
        if(carry==1){
            ListNode *x = new ListNode(1);
            prev->next = x;
            cout<<4;
        }
        return head;
    }
};
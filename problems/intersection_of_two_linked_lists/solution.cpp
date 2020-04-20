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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = 0;
        ListNode* A = headA;
        while(A){
            lengthA++;
            A = A->next;
        }
        int lengthB = 0;
        ListNode* B = headB;
        while(B){
            lengthB++;
            B = B->next;
        }
        while(lengthA>lengthB){
            lengthA--;
            headA = headA->next;
        }
        while(lengthB>lengthA){
            lengthB--;
            headB = headB->next;
        }
        while(headA && headB){
            if(headA==headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
        
    }
};
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
    bool isPalindrome(ListNode* head) {
//         Step 1: Calculating the length first
        int length = 0;
        ListNode* ptr = head;
        while(ptr){
            ptr = ptr->next;
            length++;
        }
        if(length<=1){
            return true;
        }
//         Step 2: Going to the center node
        ptr = head;
        for(int i = 0;i<length/2;i++){
            ptr = ptr->next;
        }
//         Step 3: Reversing the list from the center node
        ListNode* prev = ptr;
        ptr = ptr->next;
        prev->next = NULL;
        while(ptr){
            ListNode* temp = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = temp;
        }
        ptr = prev;
//         Step 4: Checking for palindrome from both ends
        for(int i = 0;i<length/2;i++){
            if(head->val!=ptr->val){
                return false;
            }
            head = head->next;
            ptr = ptr->next;
        }
        return true;
    }
};
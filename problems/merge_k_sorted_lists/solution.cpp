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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = NULL;
        int j;
        for(int i = 0;i<lists.size();i++){
            if(lists[i]==NULL){
                lists.erase(lists.begin()+i);
                i--;
            }
            else if(head==NULL){
                head = lists[i];
                j = i;
            }
            else{
                if(head->val>lists[i]->val){
                    head = lists[i];
                    j = i;
                }
            }
        }
        if(head ==NULL){
            return head;
        }
        ListNode* ptr = head;
        lists[j] = lists[j]->next;
        while(true){
            ListNode* x = NULL;
            for(int i = 0;i<lists.size();i++){
                if(lists[i]==NULL){
                    lists.erase(lists.begin()+i);
                    i--;
                }
                else if(x==NULL){
                    x = lists[i];
                    j = i;
                }
                else{
                    if(x->val>=lists[i]->val){
                        x = lists[i];
                        j = i;
                    }
                }
            }
            if(x==NULL){
                return head;
            }
            ptr->next = x;
            ptr = ptr->next;
            lists[j] = lists[j]->next;
        }
    }
};
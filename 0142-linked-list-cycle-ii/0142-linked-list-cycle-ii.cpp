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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL ){
            fast=fast->next->next;
            slow=slow->next;
            if( slow==fast){
               ListNode* ptr=head;
               while(slow!= ptr){
                slow=slow->next;
                ptr=ptr->next;
               }
               return ptr;
            }
           
        }
        return NULL;
    }
};
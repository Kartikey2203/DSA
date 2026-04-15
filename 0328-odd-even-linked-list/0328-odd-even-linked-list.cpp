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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next ==NULL)
        return head;
        ListNode* fodd=head;
        ListNode* feven=head->next;
        ListNode* temp=feven;
        // feven=feven->next;next

        while( feven !=NULL && feven->next !=NULL){
           fodd->next=feven->next;
            fodd=fodd->next;
            feven->next=fodd->next;
            feven=feven->next;
        } 
            fodd->next=temp;
        return head;
    }
};
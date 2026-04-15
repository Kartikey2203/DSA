class Solution {
public:
    ListNode* reve(ListNode* head){
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp != NULL){
            ListNode* nex = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nex;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* rev = reve(head);
        ListNode* start = rev;   // FIX: store head

        // Case: single node
        if(rev->next == NULL && n == 1)
            return NULL;

        // Case: delete first node
        if(n == 1){
            ListNode* temp = rev->next;
            return reve(temp);
        }

        // Move to (n-1)th node
        while(n > 2){
            rev = rev->next;
            n--;
        }

        // Delete nth node
        ListNode* temp = rev->next;
        rev->next = temp->next;

        // Reverse full list back
        return reve(start);   // FIX: use original head
    }
};
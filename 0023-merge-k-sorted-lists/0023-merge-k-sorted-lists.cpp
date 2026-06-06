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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode*  dummy=new ListNode(0);
        ListNode*  temp=dummy;
        int size=lists.size();
        int mini=INT_MAX;
        if(lists.size()==0)
        return NULL;
        else{
            while(true){
                int i=0,j;
            while(i< size){
                if(lists[i]!=NULL && mini >=lists[i]->val){
                    j=i;
                mini=lists[i]->val;
                }
                i++;
            }
            if(mini==INT_MAX)
                return dummy->next;
            lists[j]=lists[j]->next;
            temp->next=new ListNode(mini);
            temp=temp->next;
            mini=INT_MAX;
        }
        }
    }
};
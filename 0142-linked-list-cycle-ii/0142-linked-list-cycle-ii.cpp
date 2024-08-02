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
        ListNode *fast=head,*slow=head;
        int flag=0;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                // cout<<slow->val<<" "<<fast->val<<endl;
                // return slow;
                flag=1;
                break;
            }
        }
        if(flag==0){
            // cout<<"no cycle";
            return NULL;
        }
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;

        }
        return slow;
        
    }
};
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
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *temp=head,*tail=NULL;
        ListNode *head_back=head;
        int n=0;
        while(temp!=NULL){
            tail=temp;
            temp=temp->next;
            n++;
        }
        
        if(n==0 || n==1){
            return head;
        }
        
        k=k%n;
        
        if(k==0){
            return head;
        }
        
        int it=0;
        temp=head;
        // cout<<n-k;
        while(it<(n-k-1)){
            temp=temp->next;
            it++;
        }
        head_back=temp->next;
        temp->next=NULL;
        tail->next=head;
        
        head=head_back;
        
        
        
        
        // cout<<temp->val;
        return head;
        
    }
};
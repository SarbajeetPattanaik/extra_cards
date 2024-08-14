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
 ListNode* rev(ListNode* head,int k){
        ListNode *temp=head;
        ListNode *prev=NULL,*backup=NULL;
        int i=0;
        int l=0;
        while(temp!=NULL){
            l++;
            temp=temp->next;
        }
        if(l<k){
            return head;
            //NULL};
        }

        temp=head;

        while(temp!=NULL&&i<k){
            backup=temp->next;
            temp->next=prev;
            prev=temp;
            temp=backup;
            i++;
        }
        // head->next=backup;
        head->next=rev(backup,k);
        // return {prev,head,backup};
        return prev;
    }
    ListNode* swapPairs(ListNode* head) {
        return rev(head,2);
        
        
    }
};
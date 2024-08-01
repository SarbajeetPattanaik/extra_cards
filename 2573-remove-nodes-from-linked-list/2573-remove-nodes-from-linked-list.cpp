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

    ListNode* rev(ListNode *head){
        ListNode *temp=head,*prev=NULL,*backup=NULL;

        while(temp!=NULL){
            backup=temp->next;
            temp->next=prev;
            prev=temp;
            temp=backup;
        }
        return prev;
    }

    void printLL(ListNode *head){
        ListNode *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp=temp->next;
        }
        cout<<endl;
    }
    ListNode* removeNodes(ListNode* head) {
        head=rev(head);
        long max1=LONG_MIN;
        ListNode *temp=head,*prev=NULL;
        while(temp!=NULL){
            if(temp->val>=max1){
                max1=temp->val;
                prev=temp;
                temp=temp->next;
            }
            else{
                prev->next=temp->next;
                delete temp;
                temp=prev->next;
            }
            
        }
        head=rev(head);
        printLL(head);
        return head;
    }
};
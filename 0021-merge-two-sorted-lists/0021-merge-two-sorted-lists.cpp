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

    void printLL(ListNode *head){

        ListNode *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp=temp->next;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp1=list1,*temp2=list2,*prev=NULL,*temp=new ListNode;
        ListNode *head=temp;
        head->next=NULL;
        prev=head;

        while(temp1!=NULL&&temp2!=NULL){
            if(temp1->val<temp2->val){
                // prev=temp;
                temp=new ListNode;
                temp->val=temp1->val;
                temp->next=NULL;
                prev->next=temp;
                temp1=temp1->next;
            }
            else{
                // prev->next=temp;
                // prev=temp;
                temp=new ListNode;
                temp->val=temp2->val;
                temp->next=NULL;
                prev->next=temp;
                temp2=temp2->next;
            }
            prev=prev->next;
            
        }

        while(temp1!=NULL){
            // prev=temp;
                temp=new ListNode;
                temp->val=temp1->val;
                temp->next=NULL;
                prev->next=temp;
                temp1=temp1->next;
                prev=prev->next;
        }

        while(temp2!=NULL){
                // prev->next=temp;
                // prev=temp;
                temp=new ListNode;
                temp->val=temp2->val;
                temp->next=NULL;
                prev->next=temp;
                temp2=temp2->next;
                prev=prev->next;
            }

            printLL(head);
            return head->next;
        

        
    }
};
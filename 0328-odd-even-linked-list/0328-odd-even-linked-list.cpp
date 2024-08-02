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
        void printLL(ListNode* head){
                ListNode *temp=head;

                while(temp!=NULL){
                    cout<<temp->val<<endl;
                    temp=temp->next;
                }
            }

        ListNode* oddEvenList(ListNode* head) {
            if(head==NULL||head->next==NULL){
                return head;
            }
            // int odd=0;
            ListNode *odd=head,*backup=head->next;
            ListNode *even=head->next;
            
            while(even!=NULL && even->next!=NULL){
            // cout<<"temp"<<temp->val<<endl;
            // cout<<"odd"<<odd->val<<endl;
            // cout<<"even"<<even->val<<endl;

            // backup=odd->next->next;
            // even->next=even->next->next;
            odd->next=odd->next->next;
            even->next=even->next->next;
            // temp=even->next;
            even=even->next;
            odd=odd->next;
            // temp=even;
        }
        odd->next=backup;
        // even->next=NULL;

        printLL(head);
        cout<<"even"<<endl;
        printLL(backup);

        return head;
    }
};
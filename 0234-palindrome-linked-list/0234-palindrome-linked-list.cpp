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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *temp=head;
        if(head==NULL || head->next==NULL){
            return true;
        }

        // while(temp!=NULL){
        //     if(!s.empty()&&s.top()==temp->val){
        //         s.pop();
        //     }
        //     else{
        //         s.push(temp->val);
        //     }
        //     temp=temp->next;
        // }

        while(temp!=NULL){
            s.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(s.top()==temp->val){
                s.pop();
            }
            temp=temp->next;
        }
        if(s.empty()){
            return true;
        }
        return false;
        
    }
};
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
    void deleteNode(ListNode* node) {
        // ListNode tempNode= new ListNode;
        int temp=node->next->val;
        node->val=temp;
        node->next=node->next->next;
        
    }
};
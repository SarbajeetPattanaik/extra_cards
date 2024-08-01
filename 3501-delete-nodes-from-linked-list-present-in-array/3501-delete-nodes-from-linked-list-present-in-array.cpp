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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
            }
        }

        ListNode *temp=head,*prev=NULL;

        while(mp[head->val]==1){
            head=head->next;
        }
        temp=head;

        while(temp!=NULL){
            if(mp[temp->val]==1){
                // backup=temp->next;

                prev->next=temp->next;
                delete temp;
                temp=prev->next;

            }
            else{
                prev=temp;
                temp=temp->next;
                }
        }
        return head;

        
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void inorder(TreeNode *root, int &counter, int k,int &min1){
        

        if(root==NULL){
            return;
        }

       

        inorder(root->left,counter,k,min1);
        counter++;
        if(counter==k){
            min1=root->val;
        }
        // if(counter==k){
        //     return root->val;
        // }

        inorder(root->right,counter,k,min1);

        // return -1;
        return ;
    }
    int kthSmallest(TreeNode* root, int k) {
        int counter=0;
        int min1=INT_MAX;
        inorder(root,counter,k,min1);

        return min1;
        
    }
};
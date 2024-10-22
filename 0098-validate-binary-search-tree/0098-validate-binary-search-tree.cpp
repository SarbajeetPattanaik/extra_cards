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
    // int min=INT_MAX;
    // int max=INT_MIN;
    int min1(TreeNode *root){

        if(root==NULL){
            return INT_MAX;
        }

        int temp=root->val;
        
        if(root->right!=NULL){
            temp=min(temp,min1(root->right));
        }

        if(root->left!=NULL){
            temp=min(temp,min1(root->left));
        }

        return temp;

        
        // return min(root->left->val,root->right->val);
    }

    int max1(TreeNode *root){

        if(root==NULL){
            return INT_MIN;
        }
        
        // return max(max1(root->left),max1(root->right));

        int temp=root->val;
        
        if(root->right!=NULL){
            temp=max(temp,max1(root->right));
        }

        if(root->left!=NULL){
            temp=max(temp,max1(root->left));
        }

        return temp;
    }



    bool isValidBST(TreeNode* root) {

        if(root==NULL){
            return true;
        }

        
        // if(root->left!=NULL && root->left->val>=root->val){
        //     cout<<"max:"<<max1(root->left);
        //     return false;
        // }

        // if(root->right!=NULL && root->right->val<=root->val){
        //     cout<<"min:"<<min1(root->right);
        //     return false;
        // }


        if(root->left!=NULL && max1(root->left)>=root->val){
            cout<<"max:"<<max1(root->left);
            return false;
        }

        if(root->right!=NULL && min1(root->right)<=root->val){
            cout<<"min:"<<min1(root->right);
            return false;
        }




        // isValidBST(root->left);
        // isValidBST(root->rigt);

        return  isValidBST(root->left) && isValidBST(root->right);

        
    }
};
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,map<int,vector<int>>> mp;
        queue<pair<TreeNode*, pair<int,int>>>q;
        q.push({root,{0,0}});

        while(!q.empty()){
            auto p = q.front();
            q.pop();
            TreeNode *temp = p.first;
            int x = p.second.first;
            int y = p.second.second;
            mp[x][y].push_back(temp->val);

            if(temp->left != NULL){
                q.push({temp->left,{x - 1 , y + 1}});
            }
            if(temp->right != NULL){
                q.push({temp->right,{x+1, y + 1}});
            }
        }
        for(auto p : mp){
            vector<int> v;
            for(auto q : p.second){
                sort(q.second.begin(), q.second.end());
                v.insert(v.end(), q.second.begin(), q.second.end());

            }
            ans.push_back(v);
        }
        return ans;
    }
};
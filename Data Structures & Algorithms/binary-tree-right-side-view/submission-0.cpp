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
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        queue<TreeNode *>q1;
        vector<int>level;
        q1.push(root);
        while(!q1.empty()){
            int size=q1.size();
            for(int i=0;i<size;i++){
                TreeNode *temp=q1.front();
                q1.pop();
                if(i==size-1){
                    level.push_back(temp->val);
                }
                if(temp->left){
                    q1.push(temp->left);
                }
                if(temp->right){
                    q1.push(temp->right);
                }
            }
        }
        return level;
    }
};

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
    int val=0;
    int preorder(TreeNode* &root,int &k){
        if(root==NULL){
            return 0;
        }
        preorder(root->left,k);
        k--;
        if(k==0){
            val= root->val;
            return root->val;
        }
        preorder(root->right,k);
        return val;
    }
    int kthSmallest(TreeNode* root, int k) {
        preorder(root,k);
        return val;
    }
};

class Solution {
public:

    int dfs(TreeNode* root, int maxValue) {
        if(root == NULL) {
            return 0;
        }

        int count = 0;

        if(root->val >= maxValue) {
            count = 1;
        }

        maxValue = max(maxValue, root->val);

        count += dfs(root->left, maxValue);
        count += dfs(root->right, maxValue);

        return count;
    }

    int goodNodes(TreeNode* root) {
        return dfs(root, root->val);
    }
};
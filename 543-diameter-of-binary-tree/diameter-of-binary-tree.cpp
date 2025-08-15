class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int left = height(root->left);
        int right = height(root->right);
        int dia = left + right;
        return max({dia, diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)});
    }
private:
    int height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height(root->left), height(root->right));
    }
};

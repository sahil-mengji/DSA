class Solution {
private:
    int maxSum(TreeNode* n, int &maxi) {
        if (!n) return 0;
        int lef = max(0, maxSum(n->left, maxi));
        int rig = max(0, maxSum(n->right, maxi));
        maxi = max(maxi, lef + rig + n->val);
        return n->val + max(lef, rig);
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxSum(root, maxi);
        return maxi;
    }
};

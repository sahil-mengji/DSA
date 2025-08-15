class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        deque<TreeNode*> dq;
        dq.push_back(root);
        bool leftToRight = true;

        while (!dq.empty()) {
            int size = dq.size();
            vector<int> level(size);

            for (int i = 0; i < size; i++) {
                TreeNode* node = dq.front();
                dq.pop_front();

                int index = leftToRight ? i : (size - 1 - i);
                level[index] = node->val;

                if (node->left) dq.push_back(node->left);
                if (node->right) dq.push_back(node->right);
            }

            ans.push_back(level);
            leftToRight = !leftToRight;
        }

        return ans;
    }
};

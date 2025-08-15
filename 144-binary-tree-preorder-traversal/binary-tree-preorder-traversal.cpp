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

private:
    void preorder(vector<int>& a, TreeNode* root){
        if(root==NULL) return;
        a.push_back(root->val);
        preorder(a,root->left);
        preorder(a,root->right);
    };
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> a;
        preorder(a,root);
          return a;
    }
  
};

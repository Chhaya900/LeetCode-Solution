class Solution {
public:
    vector<int> pool;
    void preorder(TreeNode* root) {
        if (root != nullptr) {
            pool.push_back(root->val);
            preorder(root->left);
            preorder(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return pool;
    }
};
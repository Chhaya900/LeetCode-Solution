class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode *> s;
        vector<int> result;
        unordered_map<TreeNode *, int> umap;
        if (root != NULL)
        {
            s.push(root);
        }
        while (!s.empty())
        {
            if (s.top()->left != NULL && !umap[s.top()->left])
            {
                s.push(s.top()->left);
            }
            else if (s.top()->right != NULL && !umap[s.top()->right])
            {
                s.push(s.top()->right);
            }
            else
            {
                // cout << s.top()->val << ", ";
                result.push_back(s.top()->val);
                umap[s.top()] = 1;
                s.pop();
            }
        }
        return result;
    }
};
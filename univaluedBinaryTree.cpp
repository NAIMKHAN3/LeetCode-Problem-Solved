/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool sameNode(TreeNode* root, int x) {
        if (!root)
            return true;
        if (root->val != x)
            return false;
        bool l = sameNode(root->left, x);
        bool r = sameNode(root->right, x);
        return (l && r);
    
} bool isUnivalTree(TreeNode* root) {
    if(!root) return true;
    bool ans = sameNode(root, root->val);
    return ans;
}
}
;
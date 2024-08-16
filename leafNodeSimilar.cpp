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
vector<int> v1;
vector<int> v2;
class Solution {
public:
void leaf(TreeNode* root, int x){
    if(x == 1){
        if(!root)return;
        if(!root->left && !root->right){
            v1.push_back(root->val);
        }
        if(root->left)leaf(root->left, x);
        if(root->right)leaf(root->right, x);
    }
    else{
        if(!root)return;
        if(!root->left && !root->right){
            v2.push_back(root->val);
        }
        if(root->left)leaf(root->left, x);
        if(root->right)leaf(root->right, x);
    }
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();
       leaf(root1,1);
       leaf(root2,2);
       cout <<v1.size()<< v2.size();
       return v1 == v2;
    }
};
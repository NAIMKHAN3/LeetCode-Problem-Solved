#include<bits/stdc++.h>
using namespace std;
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left),
   right(right) {}
    };
*/
 class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left),
   right(right) {}
    };
vector<int> v;
void postOrder(TreeNode *root) {
  if (!root)
    return;
  postOrder(root->left);
  postOrder(root->right);
  v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root) {
  v.clear();
  // Write your code here.
  postOrder(root);
  return v;
}
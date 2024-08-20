
#include<bits/stdc++.h>
using namespace std;
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
template <typename T>
class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };
vector<int> v;
void postOrder(TreeNode<int> *root) {
  if (!root)
    return;
  v.push_back(root->data);
  postOrder(root->left);
  postOrder(root->right);
}
vector<int> preOrder(TreeNode<int> * root){
    v.clear();
  // Write your code here.
  postOrder(root);
  return v;
}

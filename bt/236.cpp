#include <bt.h>
using namespace std;
TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
  if (root == nullptr || root == p || root == q)
    return root;
  // left
  TreeNode *left = lowestCommonAncestor(root->left, p, q);
  // right
  TreeNode *right = lowestCommonAncestor(root->right, p, q);
  if (left == nullptr)
    return right;
  else if (right == nullptr)
    return left;
  else
    return root;
}
int main() {
  vector<int> arr = { 3,5,1,6,2,0,8,-1,-1,7,4 };
  vector<int> arr2  = { 5 };
  vector<int> arr3  = {1 };

  TreeNode* root = arrayToBinaryTree(arr, 0);
  TreeNode* p = new TreeNode(5);
  TreeNode* q = new TreeNode(1);




  cout << lowestCommonAncestor(root, p, q);
  return 0;
}
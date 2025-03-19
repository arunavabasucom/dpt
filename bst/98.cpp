#include <bits/stdc++.h>
#include <bt.h>
using namespace std;

bool check(long lb, long ub, TreeNode *root) {
  if (root == NULL) {
    return true;
  }
  if (root->val >= ub || root->val <= lb) {
    return false;
  }
  return check(lb, root->val, root->left) && check(root->val, ub, root->right);
}
bool isValidBST(TreeNode *root) { return check(LONG_MIN, LONG_MAX, root); }

int main() {
  cout << LONG_MAX;
  return 0;
}
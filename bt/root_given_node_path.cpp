//https://www.interviewbit.com/problems/path-to-given-node/
#include <bt.h>
using namespace std;

bool fn(int target, vector<int> &res, TreeNode *&root) {
  if (root == nullptr) {
    return false;
  }
  res.push_back(root->val);
  // if we get the element retrun true
  if (root->val == target) {
    return true;
  }

  if (fn(target, res, root->left) || fn(target, res, root->right)) {
    return true;
  }

  res.pop_back();
  return false;
}

vector<int> Solution::solve(TreeNode *root, int target) {
  vector<int> res;
  if (root == nullptr)
    return res;
  fn(target, res, root);
  return res;
}

int main() { return 0; }
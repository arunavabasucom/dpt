#include <bits/stdc++.h>
#include <bt.h>
using namespace std;
TreeNode *build(int left, int right, vector<int> &nums) {
  if (left > right)
    return nullptr;
  int mid = (left + right) >> 1;
  TreeNode *root = new TreeNode(nums[mid]);
  root->left = build(left, mid - 1, nums);
  root->right = build(mid + 1, right, nums);
  return root;
};
TreeNode *sortedArrayToBST(vector<int> &nums) {
  int left = 0, right = nums.size() - 1;
  return build(left, right, nums);
};
int main() { return 0; }
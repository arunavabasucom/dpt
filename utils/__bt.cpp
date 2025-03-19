#include <bt.h>
using namespace std;

TreeNode* arrayToBinaryTree(const vector<int>& arr, int index) {
  if (index >= static_cast<int>(arr.size()) || arr[index] == -1) { // Cast to int to fix warning
    return nullptr; // Return null for invalid index or missing value
  }

  TreeNode* root = new TreeNode(arr[index]);
  root->left = arrayToBinaryTree(arr, 2 * index + 1);  // Left child index
  root->right = arrayToBinaryTree(arr, 2 * index + 2); // Right child index
  return root;
}

// Function to print the binary tree in a text representation
// void printBinaryTree(TreeNode* root, string indent = "", bool last = true) {
//   if (root != nullptr) {
//     cout << indent;
//     if (last) {
//       cout << "R----";
//       indent += "   ";
//     }
//     else {
//       cout << "L----";
//       indent += "|  ";
//     }
//     cout << root->val << endl;
//     printBinaryTree(root->left, indent, false);
//     printBinaryTree(root->right, indent, true);
//   }
// }
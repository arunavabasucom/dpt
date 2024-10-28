#include <bt.h>
TreeNode* arrayToBinaryTree(const std::vector<int>& arr, int index) {
    if (index >= arr.size() || arr[index] == -1) { // Change NULL to -1
        return nullptr; // Return null for invalid index or missing value
    }

    TreeNode* root = new TreeNode(arr[index]);
    root->left = arrayToBinaryTree(arr, 2 * index + 1);  // Left child index
    root->right = arrayToBinaryTree(arr, 2 * index + 2); // Right child index
    return root;
}

// Function to print the binary tree in a text representation.
void printBinaryTree(TreeNode* root, std::string indent, bool last) {
    if (root != nullptr) {
        std::cout << indent;
        if (last) {
            std::cout << "R----";
            indent += "   ";
        } else {
            std::cout << "L----";
            indent += "|  ";
        }
        std::cout << root->val << std::endl;
        printBinaryTree(root->left, indent, false);
        printBinaryTree(root->right, indent, true);
    }
}

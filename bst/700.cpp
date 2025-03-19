#include <bt.h>
#include <bits/stdc++.h>
using namespace std;

TreeNode* searchBST(TreeNode* root, int val) {
    while (root != nullptr && root->val != val) {
        root = val < root->val ? root->left : root->right;
    }
    return root;
}

int main() {

    return 0;
}
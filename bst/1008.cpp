#include <bt.h>
#include <bits/stdc++.h>
using namespace std;

TreeNode* build(int& i, int bound, vector<int>& preorder) {
    if (i == preorder.size() || preorder[i] > bound) return nullptr;
    TreeNode* root = new TreeNode(preorder[i++]);
    root->left = build(i,root->val,preorder);
    root->right = build(i, bound,preorder);
    return root;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
    int i = 0;
    return build(i, INT_MAX,preorder);
}

int main() {

    return 0;
}
#include <bt.h>
using namespace std;
// O(N)
int fn(TreeNode* root) {
    if (root == nullptr)
        return 0;
    int lh = fn(root->left);
    int rh = fn(root->right);
    if (lh == -1 || rh == -1 || abs(lh - rh) > 1) return -1;
    return max(lh, rh) + 1;
}

bool isBalanced(TreeNode* root) {
    return fn(root) != -1;
}


// O(N2)
// height
// int fn(TreeNode* root) {
//     if (root == nullptr) return 0;
//     return 1 + max(fn(root->left), fn(root->right));
// }
// bool isBalanced(TreeNode* root) {
//     if (root == nullptr) return true;
//     int lh = fn(root->left);
//     int rh = fn(root->right);
//     if (abs(lh - rh) > 1) return false;

//     // left 
//     bool left = isBalanced(root->left);
//     bool right = isBalanced(root->right);

//     if (!left || !right) return false;

//     return true;
// }

int main() {
    
    return 0;
}
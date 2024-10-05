#include <bt.h>
using namespace std;
int fn(TreeNode*& root, int& diameter) {
    if (!root) return 0;
    // get the left height
    int lh = fn(root->left, diameter);
    // get the right height
    int rh = fn(root->right, diameter);
    // get the max diameter 
    diameter = max(diameter, lh + rh);
    return 1 + max(lh, rh);
}
int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;
    fn(root, diameter);
    return diameter;
}
int main(){
    
    return 0;
}
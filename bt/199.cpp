#include <bt.h>
using namespace std;

// preorder - R L Ri
// re-pre - R Ri L
// R Ri Le
void helper(TreeNode *root, int level, vector<int> &res){
    if (root == nullptr)
        return;
    if (res.size() == level)
        res.push_back(root->val);
    // right
    helper(root->right, level + 1, res);
    // left
    helper(root->left, level + 1, res);
}
vector<int> rightSideView(TreeNode *root){
    vector<int> res;
    helper(root, 0, res);
    return res;
}
int main(){
    
    return 0;
}
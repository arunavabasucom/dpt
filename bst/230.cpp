#include <bt.h>
#include <bits/stdc++.h>
using namespace std;

// void inTr(TreeNode* root, vector<int>& inor) {
//     if (root == nullptr)
//         return;
//     inTr(root->left, inor);
//     inor.push_back(root->val);
//     inTr(root->right, inor);
//     return;
// }
// int kthSmallest(TreeNode* root, int k) {
//     vector<int> inor;
//     inTr(root, inor);
//     return inor[k - 1];
// }

// TC - O(N)
// 
void inTr(TreeNode* root, int k, int& count, int& res) {
    if (root == nullptr)
        return;
    if (count == k) {
        res = root->val;
        return;
    }
    count++;

    inTr(root->left, k,count,res);
    inTr(root->right, k,count,res);
    return;
}
int kthSmallest(TreeNode* root, int k) {
    int count = 0;
    int res ;
    inTr(root, k, count, res);
    return res;

}

int main() {

    return 0;
}

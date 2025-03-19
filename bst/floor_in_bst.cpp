//https://www.naukri.com/code360/problems/floor-from-bst_920457
#include <bt.h>
#include <bits/stdc++.h>
using namespace std;

int floorInBST(TreeNode<int>* root, int X) {
    // Write your code here.
    // num <= X
    int floor = -1;
    while (root) {
        if (root->val == X) {
            floor = X;
            return floor;
        }
        else if (root->val <= X) {
            floor = root->val;
            root = root->right;
        }
        else {
            root = root->left;
        }
    }
    return floor;
}


int main() {
    
    return 0;
}
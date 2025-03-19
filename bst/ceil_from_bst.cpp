//https://www.naukri.com/code360/problems/ceil-from-bst_920464
#include <bt.h>
#include <bits/stdc++.h>
using namespace std;
int findCeil(BinaryTreeNode<int>* node, int x) {
    // Write your code here.
    int ceil = -1;
    while (node) {
        if (node->data == x) {
            ceil = node->data;
            return ceil;
        }
        else if (node->data < x) {
            node = node->right;
        }
        else {
            ceil = node->data;
            node = node->left;
        }
    }
    return ceil;
}

int main() {
    
    return 0;
}
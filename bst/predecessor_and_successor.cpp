// nned to check
#include <bt.h>
#include <bits/stdc++.h>
using namespace std;

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
    pre = nullptr, suc = nullptr;
    while (root) {
        if (key <= root->data) {
            pre = root;
            root = root->left;
        }
        else if (key >= root->data) {
            suc = root;
            root = root->right;
        }
    }
}




int main() {
    
    return 0;
}
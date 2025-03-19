//https://www.geeksforgeeks.org/problems/kth-largest-element-in-bst/1
#include <bt.h>
// #include <bits/stdc++.h>
using namespace std;
// TC - O(N)
void kle(Node* root, int& k, int& count, int& res) {
    if (!root || count >= k) return;
    kle(root->right, k, count, res);
    count++;
    if (count == k) {
        res = root->data;
        return;
    }
    kle(root->left, k, count, res);
    return;
}
int kthLargest(Node* root, int k) {
    int count = 0;
    int res = 0;
    kle(root, k, count, res);
    return res;
}


int main() {
    
    return 0;
}
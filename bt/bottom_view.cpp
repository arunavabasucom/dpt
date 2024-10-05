//https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
#include <bt.h>
using namespace std;
vector <int> bottomView(Node* root) {
    vector<int> res;
    if (root == nullptr) return res;
    queue<pair<Node*, int>>qu;// queue<root,vertical>
    map<int, int> mp;// map<vertical,node>
    qu.push({ root, 0 });
    while (!qu.empty()) {
        pair<Node*, int> front = qu.front();
        qu.pop();
        Node* node = front.first;
        int v = front.second;
        mp[v] = node->data;
        if (node->left) {
            qu.push({ node->left, v-1});
        }
        if (node->right) {
            qu.push({ node->right, v + 1 });
        }        
    }
    for (auto p : mp) {
        res.push_back(p.second);
    }
    return res;

}

int main() {
    return 0;
}
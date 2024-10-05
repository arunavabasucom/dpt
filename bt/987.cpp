#include <bt.h>
using namespace std;
//(vectical line no. && level)
// queue(node,vertical,level)
// queue<pair<node,pair<vertical,level>>>
// map<int(vertical),map<int(level),multiset(nodes)>>

// 1. insert in the queue
// 2. pop out and store in the map



vector<vector<int>> verticalTraversal(TreeNode* root) {
    queue<pair<TreeNode*, pair<int, int>>> qu;
    map<int, map<int, multiset<int>>> mp;
    // insert the first node
    qu.push({ root,{0,0} });
    while (!qu.empty()){
        pair<TreeNode*, pair<int, int>> p = qu.front(); // node vertical level 
        qu.pop();
        TreeNode* node = p.first;// get the node 
        int v = p.second.first;// get the vertical 
        int l = p.second.second;// get the level
        // push every node in each vertical
        mp[v][l].insert(node->val);
        // left 
        if (node->left) {
            qu.push({ node->left,{v-1,l+1} });
        }
        // right
        if (node->right) {
            qu.push({ node->right,{v +1,l+ 1} });
        }
    }
    vector<vector<int>> res;
    for (auto p : mp){
        vector<int> col;
        for (auto q : p.second) { //map<int, multiset<int>>
            col.insert(col.end(), q.second.begin(), q.second.end());
        }
        res.push_back(col);
    }
    return res;

}
int main() {
    return 0;
}
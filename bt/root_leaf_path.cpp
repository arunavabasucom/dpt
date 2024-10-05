//https://www.geeksforgeeks.org/problems/root-to-leaf-paths/1
#include <bt.h>
using namespace std;

void fn(Node* root, vector<int>& path, vector<vector<int>>& res) {
    if (root == nullptr) return;
    path.push_back(root->data);
    if (root->left == nullptr && root->right == nullptr)
        res.push_back(path);
    else
        //left
        fn(root->left, path, res);
        //right
        fn(root->right, path, res);
    path.pop_back();
}

vector<vector<int>> Paths(Node* root) {
    vector<vector<int>> res;
    vector<int> path;
    fn(root, path, res);
    return res;
}
int main(){
    
    return 0;
}
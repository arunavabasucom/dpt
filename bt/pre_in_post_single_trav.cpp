//https://www.naukri.com/code360/problems/tree-traversal_981269
#include <bt.h>
using namespace std;
// if num == 1 
//    preorder
//    ++
//    left

// if num == 2
//    inorder
//    ++
//    right

// if num == 3
//    postorder
//    ++
vector<vector<int>> getTreeTraversal(TreeNode* root) {
    stack<pair<TreeNode*, int>> st; // node num
    st.push({ root,1 });
    vector<vector<int>> res;//{in,pre ,post}
    vector<int> in, pre, post;

    while (!st.empty()) {
        pair<TreeNode*, int> top = st.top();
        st.pop();
        TreeNode* node = top.first; //node 
        int num = top.second; // num

        //preorder
        if (num == 1) {
            pre.push_back(node->val);
            num++;
            st.push({ node,num });
            if (node->left) {
                st.push({ node->left,1 });
            }
        }
        else if (num == 2) {
            in.push_back(node->val);
            num++;
            st.push({ node,num });
            if (node->right) {
                st.push({ node->right,1});
            }
        }
        else {
            post.push_back(node->val);
        }
    }

        res.push_back(in);
        res.push_back(pre);
        res.push_back(post);



    return res;

}
int main() {

    return 0;
}
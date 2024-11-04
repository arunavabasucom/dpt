#include <arr.h>
#include <bits/stdc++.h>
using namespace std;
void fn(int node, vector<int>& res, vector<int>& vis, vector<vector<int>>& adj) {
    vis[node] = 1;
    res.push_back(node);
    for (auto it : adj[node]) {
        if (!vis[it]) {
            fn(it, res, vis, adj);
        }

    }
}

vector<int> dfsOfGraph(vector<vector<int>>& adj) {
    vector<int> res;
    vector<int> vis(adj.size(), 0);
    fn(0, res, vis, adj);
    return res;
}
int main() {
    vector<vector<int>> adj = {
      {2, 3, 1},
      {0},
      {0, 4},
      {0},
      {2}
    };
    vector<int> res = dfsOfGraph(adj);
    __veprint(res);
    return 0;
}
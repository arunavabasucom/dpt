//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

#include <bits/stdc++.h>
using namespace std;
//TC - O(N+2E) +O(N)
//SC - O(N)


bool dfs(int node, int par, vector<vector<int>>& adj, vector<int>& vis) {
    vis[node] = 1;
    for (int it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, node, adj, vis) == true) return true;
        }
        else if (it != par) return true;
    }
    return false;
}
bool isCycle(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> vis(n, 0);
    for (int i = 0;i < n;i++) {
        if (!vis[i]) {
            if (dfs(i, -1, adj, vis) == true) return true;
        }
    }
    return false;
}
int main() {

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
//TC - O(N+2E)
//SC - O(N)


bool detect(int st, vector<vector<int>>& adj, vector<int>& vis) {
    vis[st] = 1;
    //{node,src}
    queue<pair<int, int>> qu;
    qu.push({ st,-1 });
    while (!qu.empty()) {
        int node = qu.front().first;
        int par = qu.front().second;
        qu.pop();
        for (auto it : adj[node]) {
            if (vis[it] != 1) {
                vis[it] = 1;
                qu.push({ it,node });
            }
            // if it is already visited and the it is not the parent node
            // that means that some node previously visited the node before the current one 
            else if (par != it) {
                return true;
            }
        }
    }
    return false;
}
bool isCycle(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> vis(n, -1);
    for (int i = 0;i < n;i++) {
        if (vis[i] != 1) {
            if (detect(i, adj, vis)) return true;
        }
    }
    return false;
}
int main() {
    
    return 0;
}
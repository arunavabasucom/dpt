#include <arr.h>
#include <bits/stdc++.h>
using namespace std;

// TC - O(N) + O(2E)
// SC - O(3N) ≃  O(N)
vector<int> bfsOfGraph(vector<vector<int>> &adj) {
  // indexing start from 0
  vector<int> res;
  int n = adj.size();
  vector<int> vis(n, 0);
  vis[0] = 1;
  queue<int> qu;
  qu.push(0);
  while (!qu.empty()) {
    int front = qu.front();
    res.push_back(front);
    qu.pop();
    for (auto it : adj[front]) {
      if (!vis[it]) {
        vis[it] = 1;
        qu.push(it);
      }
    }
  }
  return res;
}

// O(E) for the directed graph
// O(2E) for the 2 way graph
int main() {
  vector<vector<int>> adj = {
      {2, 3, 1}, // Neighbors of node 0
      {0},       // Neighbors of node 1
      {0, 4},    // Neighbors of node 2
      {0},       // Neighbors of node 3
      {2}        // Neighbors of node 4
  };
  // int n, m;
  // cin >> n >> m;
  // int adj[n + 1][m + 1];
  // for (int i = 0; i <m; i++) {
  //     int u, v;
  //     cin >> u >> v;
  //     adj[u][v] = 1;
  //     adj[v][u] = 1;
  // }
  vector<int> res = bfsOfGraph(adj);
  __veprint(res);
  return 0;
}
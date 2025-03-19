// geeksforgeeks.org/problems/number-of-provinces/1
#include <arr.h>
#include <bits/stdc++.h>
using namespace std;

void bfs(int node, vector<int> &vis, vector<vector<int>> &adj) {
  vis[node] = 1;
  queue<int> qu;
  qu.push(node);
  while (!qu.empty()) {
    int node = qu.front();
    qu.pop();
    for (int it : adj[node]) {
      if (!vis[it]) {
        qu.push(it);
        vis[it] = 1;
      }
    }
  }
}

int numProvinces(vector<vector<int>> adj, int V) {
  // int n = adj.size();
  // int m = adj[0].size();
  vector<vector<int>> adjL(V);
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      // ![0][0] [0][1]
      if (adj[i][j] == 1 && i != j) {
        adjL[i].push_back(j);
      }
    }
  }
  int count = 0;
  vector<int> vis(V, 0);
  for (int i = 0; i < V; i++) {
    if (!vis[i]) {
      count++;
      bfs(i, vis, adjL);
    }
  }
  return count;
}

int main() {
  vector<vector<int>> matrix = {{1, 0, 1}, {0, 1, 0}, {1, 0, 1}};
  cout << "input";
  __veprint2D(matrix);
  cout << "output";
  cout << numProvinces(matrix, 3);

  return 0;
}
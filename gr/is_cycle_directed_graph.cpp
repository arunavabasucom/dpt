//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
#include <bits/stdc++.h>
using namespace std;
bool dfs(int node,vector<int>&vis,vector<int>&pathvis,vector<vector<int>>&adj){
    vis[node] = 1;
    pathvis[node] = 1;
    for (int it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, vis, pathvis, adj) == true) {
                return true;
            }
        }
        else if (pathvis[it]) {
            return true;
        }
    }
    pathvis[node] = 0;
    return false;
}
bool isCyclic(int V, vector<vector<int>> adj) {
    vector<int> vis(V, 0);
    vector<int> pathvis(V, 0);
    for (int i = 0;i < V; i++) {
        if (!vis[i]) {
            if(dfs(i,vis,pathvis,adj) == true){
                return true;
            }
        }
    }
    return false;

}

int main() {
    
    return 0;
}
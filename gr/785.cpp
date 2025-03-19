#include <arr.h>
#include <bits/stdc++.h>
using namespace std;

bool check(int start, vector<int>&color, vector<vector<int>>& graph) {
    color[start] = 0;
    queue<int> qu;
    qu.push(start);
    while(!qu.empty()) {
        int node = qu.front();
        qu.pop();
        for (int it:graph[node]) {
            if (color[it] == -1) {
                color[it] = !color[node];
                qu.push(it);
            }
            else if (color[node] == color[it]) {
                return false;
            }

        }
    }
    return true;

}

bool isBipartite(vector<vector<int>>& graph) {
    int v = graph.size();
    vector<int> color(v, -1);
    for (int i = 0; i < v;i++) {
        if (color[i] == -1) {
            if (check(i, color, graph) == false)
                return false;
        }
    }
    return true;
}


int main() {

    return 0;
}
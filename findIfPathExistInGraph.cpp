#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> v[(100000 * 2) + 5];
    bool vis[(100000 * 2) + 5];

    void dfs(int s) {
        vis[s] = true;
        for (int child : v[s]) {

            if (!vis[child]) {
                dfs(child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int d) {
        for (int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        memset(vis, false, sizeof(vis));
        dfs(src);
        return vis[d];
    }
};
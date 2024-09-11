#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int n,m;
int ans = 0;
int count;
bool vis[55][55];
vector<pair<int,int>> v = {{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int ci,int cj){
    if(ci>=0 && ci<n && cj>=0 && cj <m) return true;
    return false;
}
void dfs(int si, int sj, vector<vector<int>>& grid){
    vis[si][sj]= true;
    count++;
    for(int i = 0; i<4;i++){
    int ci = si + v[i].first;
    int cj = sj+ v[i].second;
    if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1){
        dfs(ci,cj,grid);
    }
    }
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis,false,sizeof(vis));
        for(int i = 0; i<n; i++){
            for(int j=0; j<m;j++){
                if(!vis[i][j] && grid[i][j]==1){
                    count = 0;
                    dfs(i,j,grid);
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    }
};